// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLVISIBLEFUNCTIONTABLEDESCRIPTORINTERNAL_H
#define MTLVISIBLEFUNCTIONTABLEDESCRIPTORINTERNAL_H



#import "MTLVisibleFunctionTableDescriptor.h"

@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    MTLVisibleFunctionTableDescriptorPrivate _private;
}




+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)forceResourceIndex;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)functionCount;
-(NSUInteger)hash;
-(NSUInteger)resourceIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setFunctionCount:(NSUInteger)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;


@end


#endif