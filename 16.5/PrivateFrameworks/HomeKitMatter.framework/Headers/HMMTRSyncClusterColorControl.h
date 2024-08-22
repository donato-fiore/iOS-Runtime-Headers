// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSYNCCLUSTERCOLORCONTROL_H
#define HMMTRSYNCCLUSTERCOLORCONTROL_H

@class MTRClusterColorControl, NSString;
@protocol HMFLogging;



@interface HMMTRSyncClusterColorControl : MTRClusterColorControl <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)moveToCustomColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToCustomHueAndSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToHueAndCustomSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif