// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLTYPEREGISTRY_H
#define TMLTYPEREGISTRY_H


#import <Foundation/Foundation.h>


@interface TMLTypeRegistry : NSObject



+(NSUInteger)typeForEncodedType:(id)arg0 ;
+(NSUInteger)typeForTypeName:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)classNameForType:(NSUInteger)arg0 ;
+(id)encodedTypeForType:(NSUInteger)arg0 ;
+(id)typeNameForType:(NSUInteger)arg0 ;


@end


#endif