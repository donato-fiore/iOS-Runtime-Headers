// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCATEGORYTYPE_H
#define HKCATEGORYTYPE_H



#import "HKSampleType.h"

@interface HKCategoryType : HKSampleType



+(id)_categoryTypeWithCode:(NSInteger)arg0 ;
-(BOOL)_acceptsValue:(NSInteger)arg0 ;
-(BOOL)_validateMetadata:(id)arg0 sample:(id)arg1 error:(*id)arg2 ;
-(NSInteger)_categoryValueForValue:(NSInteger)arg0 ;
-(NSInteger)_defaultValue;
-(id)_predicateForSDKVersion:(unsigned int)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif