// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLEBACKINGSTOREDICTIONARYCONTEXT_H
#define DNDSMUTABLEBACKINGSTOREDICTIONARYCONTEXT_H

@protocol DNDSApplicationIdentifierMapping, DNDSContactProviding;


#import "DNDSBackingStoreDictionaryContext.h"

@interface DNDSMutableBackingStoreDictionaryContext : DNDSBackingStoreDictionaryContext

@property (retain, nonatomic) NSObject<DNDSApplicationIdentifierMapping> *applicationIdentifierMapper;
@property (retain, nonatomic) NSObject<DNDSContactProviding> *contactProvider;
@property (nonatomic) NSUInteger destination;
@property (nonatomic) NSUInteger partitionType;




@end


#endif