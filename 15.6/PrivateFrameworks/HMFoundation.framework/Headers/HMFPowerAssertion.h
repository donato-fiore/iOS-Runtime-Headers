// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFPOWERASSERTION_H
#define HMFPOWERASSERTION_H



#import "HMFAssertion.h"

@interface HMFPowerAssertion : HMFAssertion

@property (nonatomic) unsigned int identifier; // ivar: _identifier


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_cleanUpPowerAssertion;
-(void)invalidate;


@end


#endif