// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSPROPERTYDESCRIPTIONPROXY_H
#define _NSPROPERTYDESCRIPTIONPROXY_H

@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSPropertyDescription.h"
#import "NSEntityDescription.h"

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding>

 {
    id *_sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}




+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(Class)class;
-(NSUInteger)hash;
-(id)_underlyingProperty;
-(id)description;
-(id)entity;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyDescription:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(unsigned int)_entitysReferenceID;
-(void)_createCachesAndOptimizeState;
-(void)_setEntity:(id)arg0 ;
-(void)_setEntityAndMaintainIndices:(id)arg0 ;
-(void)_setEntitysReferenceID:(unsigned int)arg0 ;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif