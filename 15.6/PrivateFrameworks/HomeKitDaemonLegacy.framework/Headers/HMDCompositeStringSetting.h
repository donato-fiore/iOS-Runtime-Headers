// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITESTRINGSETTING_H
#define HMDCOMPOSITESTRINGSETTING_H

@class NSString;
@protocol HMDCompositeSettingsStringValueProviding;


#import "HMDCompositeSetting.h"

@interface HMDCompositeStringSetting : HMDCompositeSetting <HMDCompositeSettingsStringValueProviding>



@property (readonly, copy) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithValue:(id)arg0 readVersion:(id)arg1 writeVersion:(id)arg2 ;


@end


#endif