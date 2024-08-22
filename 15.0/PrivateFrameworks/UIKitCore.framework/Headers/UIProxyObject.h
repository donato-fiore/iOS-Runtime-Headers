// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPROXYOBJECT_H
#define UIPROXYOBJECT_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface UIProxyObject : NSObject <NSCoding>

 {
    NSString *proxiedObjectIdentifier;
}




+(id)mappedObjectForCoder:(id)arg0 withIdentifier:(id)arg1 ;
+(struct __CFDictionary *)proxyDecodingMap;
+(void)addMappingFromIdentifier:(id)arg0 toObject:(id)arg1 forCoder:(id)arg2 ;
+(void)addMappings:(id)arg0 forCoder:(id)arg1 ;
+(void)removeMappingsForCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)proxiedObjectIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setProxiedObjectIdentifier:(id)arg0 ;


@end


#endif