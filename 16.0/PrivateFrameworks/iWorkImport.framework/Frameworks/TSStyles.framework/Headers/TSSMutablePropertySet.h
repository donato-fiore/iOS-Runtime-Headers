// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSMUTABLEPROPERTYSET_H
#define TSSMUTABLEPROPERTYSET_H



#import "TSSPropertySet.h"

@interface TSSMutablePropertySet : TSSPropertySet



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFirstProperty:(int)arg0 argumentList:(char *)arg1 ;
-(id)initWithPropertySet:(id)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)addProperty:(int)arg0 ;
-(void)intersectPropertySet:(id)arg0 ;
-(void)removeAllPropertyValues;
-(void)removeProperties:(id)arg0 ;
-(void)removeProperty:(int)arg0 ;


@end


#endif