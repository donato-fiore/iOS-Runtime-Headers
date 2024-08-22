// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSTRINGCONSTRAINT_H
#define HMDCOMPOSITESETTINGSTRINGCONSTRAINT_H

@class HMFObject, NSString, NSSet;
@protocol HMDCompositeSettingConstraint;



@interface HMDCompositeSettingStringConstraint : HMFObject <HMDCompositeSettingConstraint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy) NSSet *validValues; // ivar: _validValues


-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithValidValues:(id)arg0 ;


@end


#endif