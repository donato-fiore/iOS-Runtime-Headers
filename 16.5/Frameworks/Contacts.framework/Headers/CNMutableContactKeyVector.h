// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMUTABLECONTACTKEYVECTOR_H
#define CNMUTABLECONTACTKEYVECTOR_H



#import "CNContactKeyVector.h"

@interface CNMutableContactKeyVector : CNContactKeyVector



+(id)freezeIfClassIsImmutable:(id)arg0 ;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)freeze;
-(id)init;
-(id)initWithKeyVector:(id)arg0 ;
-(void)addKey:(id)arg0 ;
-(void)addKeys:(id)arg0 ;
-(void)intersectKeyVector:(id)arg0 ;
-(void)minusKeyVector:(id)arg0 ;
-(void)subtractKey:(id)arg0 ;
-(void)subtractKeys:(id)arg0 ;
-(void)unionKeyVector:(id)arg0 ;


@end


#endif