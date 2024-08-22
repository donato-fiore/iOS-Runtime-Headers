// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSBACKINGSTOREDICTIONARYCONTEXT_H
#define DNDSBACKINGSTOREDICTIONARYCONTEXT_H

@protocol NSCopying, NSMutableCopying, DNDSApplicationIdentifierMapping, DNDSContactProviding;

#import <Foundation/Foundation.h>


@interface DNDSBackingStoreDictionaryContext : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<DNDSApplicationIdentifierMapping> *applicationIdentifierMapper; // ivar: _applicationIdentifierMapper
@property (readonly, nonatomic) NSObject<DNDSContactProviding> *contactProvider; // ivar: _contactProvider
@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly, nonatomic) NSUInteger partitionType; // ivar: _partitionType


-(id)_initWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDestination:(NSUInteger)arg0 partitionType:(NSUInteger)arg1 contactProvider:(id)arg2 applicationIdentifierMapper:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif