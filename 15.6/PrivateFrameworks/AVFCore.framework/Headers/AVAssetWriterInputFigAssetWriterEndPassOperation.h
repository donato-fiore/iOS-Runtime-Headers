// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITERINPUTFIGASSETWRITERENDPASSOPERATION_H
#define AVASSETWRITERINPUTFIGASSETWRITERENDPASSOPERATION_H



#import "AVOperation.h"
#import "AVAssetWriterInputPassDescription.h"

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {
    *OpaqueFigAssetWriter _figAssetWriter;
    int _trackID;
}


@property (readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass; // ivar: _nextPassDescription


-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 trackID:(int)arg1 ;
-(void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg0 timeRanges:(id)arg1 forTrackWithID:(int)arg2 ;
-(void)dealloc;
-(void)start;


@end


#endif