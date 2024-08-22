// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRCOLORCONTROL_H
#define HMMTRCOLORCONTROL_H

@class MTRBaseClusterColorControl, NSString;
@protocol HMFLogging;



@interface HMMTRColorControl : MTRBaseClusterColorControl <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)moveToCustomColorTemperatureWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToCustomHueAndSaturationWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToHueAndCustomSaturationWithParams:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif