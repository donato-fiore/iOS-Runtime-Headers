// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTFLAG_H
#define HMDEVENTFLAG_H

@class HMFObject;



@interface HMDEventFlag : HMFObject

@property CGFloat flagPeriod; // ivar: _flagPeriod
@property NSUInteger flagValue; // ivar: _flagValue


-(id)init;
-(id)initWithValue:(NSUInteger)arg0 definedPeriod:(CGFloat)arg1 ;
-(id)shortDescription;


@end


#endif