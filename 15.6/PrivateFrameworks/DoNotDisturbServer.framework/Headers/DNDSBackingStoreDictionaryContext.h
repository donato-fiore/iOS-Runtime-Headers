// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSBACKINGSTOREDICTIONARYCONTEXT_H
#define DNDSBACKINGSTOREDICTIONARYCONTEXT_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSMutableCopying, DNDSApplicationIdentifierMapping, DNDSContactProviding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface DNDSBackingStoreDictionaryContext : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<DNDSApplicationIdentifierMapping> *applicationIdentifierMapper; // ivar: _applicationIdentifierMapper
@property (readonly, nonatomic) NSArray *arrayHealingSource;
@property (readonly, nonatomic) NSObject<DNDSContactProviding> *contactProvider; // ivar: _contactProvider
@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly, nonatomic) NSDictionary *healingSource;
@property (readonly, nonatomic) NSUInteger partitionType; // ivar: _partitionType
@property (readonly, nonatomic) BOOL redactSensitiveData; // ivar: _redactSensitiveData
@property (retain, nonatomic) NSObject<NSFastEnumeration> *underlyingHealingSource; // ivar: _underlyingHealingSource


-(id)_initWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDestination:(NSUInteger)arg0 partitionType:(NSUInteger)arg1 healingSource:(id)arg2 redactSensitiveData:(BOOL)arg3 contactProvider:(id)arg4 applicationIdentifierMapper:(id)arg5 ;
-(id)initWithDestination:(NSUInteger)arg0 partitionType:(NSUInteger)arg1 redactSensitiveData:(BOOL)arg2 contactProvider:(id)arg3 applicationIdentifierMapper:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif