// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEPROGRESS_H
#define HMSOFTWAREUPDATEPROGRESS_H

@class HMFObject;



@interface HMSoftwareUpdateProgress : HMFObject

@property (readonly) CGFloat estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (readonly) float percentageComplete; // ivar: _percentageComplete


+(id)progressFromEvent:(id)arg0 ;
-(id)initWithPercentageComplete:(float)arg0 estimatedTimeRemaining:(CGFloat)arg1 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)protoPayload;


@end


#endif