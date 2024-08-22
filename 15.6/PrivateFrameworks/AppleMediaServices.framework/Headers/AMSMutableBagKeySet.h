// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMUTABLEBAGKEYSET_H
#define AMSMUTABLEBAGKEYSET_H



#import "AMSBagKeySet.h"

@interface AMSMutableBagKeySet : AMSBagKeySet



-(void)addBagKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(void)addBagKey:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(void)unionBagKeySet:(id)arg0 ;


@end


#endif