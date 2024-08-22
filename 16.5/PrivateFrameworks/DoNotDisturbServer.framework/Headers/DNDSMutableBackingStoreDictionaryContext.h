// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMUTABLEBACKINGSTOREDICTIONARYCONTEXT_H
#define DNDSMUTABLEBACKINGSTOREDICTIONARYCONTEXT_H

@class NSArray, NSDictionary;
@protocol DNDSApplicationIdentifierMapping, DNDSContactProviding;


#import "DNDSBackingStoreDictionaryContext.h"

@interface DNDSMutableBackingStoreDictionaryContext : DNDSBackingStoreDictionaryContext

@property (retain, nonatomic) NSObject<DNDSApplicationIdentifierMapping> *applicationIdentifierMapper;
@property (retain, nonatomic) NSArray *arrayHealingSource;
@property (retain, nonatomic) NSObject<DNDSContactProviding> *contactProvider;
@property (nonatomic) NSUInteger destination;
@property (retain, nonatomic) NSDictionary *healingSource;
@property (nonatomic) NSUInteger partitionType;
@property (nonatomic) BOOL redactSensitiveData;




@end


#endif