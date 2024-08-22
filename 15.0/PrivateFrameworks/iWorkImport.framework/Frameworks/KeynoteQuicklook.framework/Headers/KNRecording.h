// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNRECORDING_H
#define KNRECORDING_H

@class TSPObject, NSArray, NSDate;


#import "KNRecordingCorrectionHistory.h"
#import "KNRecordingMovieTrack.h"
#import "KNRecordingSyncState.h"

@interface KNRecording : TSPObject

@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistory; // ivar: _correctionHistory
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSArray *eventTracks; // ivar: _eventTracks
@property (readonly, nonatomic, getter=isInSyncWithShow) BOOL inSyncWithShow;
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) KNRecordingMovieTrack *movieTrack; // ivar: _movieTrack
@property (readonly, nonatomic) KNRecordingSyncState *syncState; // ivar: _syncState


+(id)p_correctedNavigationEventsFromNavigationEventTrack:(id)arg0 ;
+(id)p_movieEventsDerivedFromNavigationEvents:(id)arg0 ;
-(BOOL)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 eventTracks:(id)arg1 movieTrack:(id)arg2 duration:(CGFloat)arg3 ;
-(id)initWithContext:(id)arg0 eventTracks:(id)arg1 movieTrack:(id)arg2 duration:(CGFloat)arg3 modificationDate:(id)arg4 ;
-(id)initWithContext:(id)arg0 eventTracks:(id)arg1 movieTrack:(id)arg2 duration:(CGFloat)arg3 syncState:(id)arg4 modificationDate:(id)arg5 correctionHistory:(id)arg6 ;
-(id)movieSegmentToTrimWhenReplacingAfterTime:(CGFloat)arg0 trimDuration:(*CGFloat)arg1 ;
-(id)recordingByAddingMissingEventsForRadar49654305;
-(id)recordingByMarkingAsOutOfSyncWithShow:(BOOL)arg0 withLocalOutOfSyncToken:(id)arg1 restoringModificationDate:(id)arg2 ;
-(id)recordingByReplacingAfterTime:(CGFloat)arg0 withRecording:(id)arg1 trimmedMovieSegment:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)slideNodeWasAddedToDocument:(id)arg0 ;
-(void)slideNodeWillBeRemovedFromDocument:(id)arg0 ;


@end


#endif