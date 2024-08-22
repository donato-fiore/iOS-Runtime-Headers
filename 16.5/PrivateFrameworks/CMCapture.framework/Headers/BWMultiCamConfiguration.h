// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMULTICAMCONFIGURATION_H
#define BWMULTICAMCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BWMultiCamConfiguration : NSObject {
    NSArray *_portTypesPrioritizedForCameraControls;
    NSArray *_unsynchronizedActiveStreamsPortTypes;
    NSArray *_synchronizedActiveStreamsGroupsPortTypes;
}




+(id)configurationWithCurrentStateFromCaptureDevice:(id)arg0 ;
+(id)configurationWithUnsynchronizedActiveStreamsPortTypes:(id)arg0 synchronizedActiveStreamsGroupsPortTypes:(id)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyActiveSynchronizedStreamsGroupsForDevice:(id)arg0 errorOut:(*int)arg1 ;
-(id)multiCamConfigurationForDevice:(id)arg0 errorOut:(*int)arg1 ;
-(void)dealloc;


@end


#endif