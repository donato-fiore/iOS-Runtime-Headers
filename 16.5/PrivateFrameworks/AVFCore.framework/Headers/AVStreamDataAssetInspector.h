// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSTREAMDATAASSETINSPECTOR_H
#define AVSTREAMDATAASSETINSPECTOR_H

@class NSArray;


#import "AVAssetInspector.h"

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)providesPreciseDurationAndTiming;
-(NSInteger)trackCount;
-(id)initWithTrackIDs:(id)arg0 ;
-(id)trackIDs;
-(struct ? )duration;
-(void)dealloc;


@end


#endif