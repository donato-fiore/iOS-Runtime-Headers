// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUTABLEPROPERTYSET_H
#define MPMUTABLEPROPERTYSET_H



#import "MPPropertySet.h"

@interface MPMutablePropertySet : MPPropertySet



+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProperties:(id)arg0 relationships:(id)arg1 ;
-(void)addProperty:(id)arg0 ;
-(void)addRelationship:(id)arg0 properties:(id)arg1 ;
-(void)removeProperty:(id)arg0 ;
-(void)removeRelationship:(id)arg0 ;


@end


#endif