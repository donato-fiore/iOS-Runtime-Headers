// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGINTEGERCONSTRAINT_H
#define HMDCOMPOSITESETTINGINTEGERCONSTRAINT_H

@class NSString;
@protocol HMDCompositeSettingConstraint;

#import <Foundation/Foundation.h>


@interface HMDCompositeSettingIntegerConstraint : NSObject <HMDCompositeSettingConstraint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger max; // ivar: _max
@property (readonly) NSInteger min; // ivar: _min
@property (readonly) NSInteger step; // ivar: _step
@property (readonly) Class superclass;


-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithMaxValue:(NSInteger)arg0 minValue:(NSInteger)arg1 stepValue:(NSInteger)arg2 ;


@end


#endif