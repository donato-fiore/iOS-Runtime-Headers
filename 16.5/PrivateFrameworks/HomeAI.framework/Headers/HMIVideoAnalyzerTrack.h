// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERTRACK_H
#define HMIVIDEOANALYZERTRACK_H

@class HMFObject, NSMutableArray, NSMutableSet;


#import "HMIVideoAnalyzerBlob.h"

@interface HMIVideoAnalyzerTrack : HMFObject

@property (readonly) NSMutableArray *analysisTimeStamps; // ivar: _analysisTimeStamps
@property (readonly) NSMutableArray *blobs; // ivar: _blobs
@property (readonly) NSMutableSet *eventClasses; // ivar: _eventClasses
@property (readonly) HMIVideoAnalyzerBlob *lastBlob;
@property NSUInteger stationaryBlobIndex; // ivar: _stationaryBlobIndex
@property (readonly) NSUInteger trackIndex; // ivar: _trackIndex


-(BOOL)isClassified;
-(BOOL)isExpiredAtTimeStamp:(struct ? )arg0 ;
-(BOOL)isLostAtTimeStamp:(struct ? )arg0 ;
-(BOOL)isStationaryAtTimeStamp:(struct ? )arg0 ;
-(NSUInteger)stationaryIndexToBoundingBox:(struct CGRect )arg0 ;
-(float)similarityToBlob:(id)arg0 ;
-(id)blobAtTimeStamp:(struct ? )arg0 ;
-(id)createPackageEventAtTimeStamp:(struct ? )arg0 ;
-(id)initWithBlob:(id)arg0 trackIndex:(NSUInteger)arg1 ;
-(id)shortDescription;
-(void)appendBlob:(id)arg0 ;


@end


#endif