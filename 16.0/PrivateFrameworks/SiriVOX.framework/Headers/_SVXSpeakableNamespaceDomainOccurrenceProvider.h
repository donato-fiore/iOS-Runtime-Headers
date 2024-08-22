// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEAKABLENAMESPACEDOMAINOCCURRENCEPROVIDER_H
#define _SVXSPEAKABLENAMESPACEDOMAINOCCURRENCEPROVIDER_H

@class NSString, NSSet;
@protocol AFSpeakableNamespaceProvider;

#import <Foundation/Foundation.h>


@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider>



@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSSet *deferredMessageKeys; // ivar: _deferredMessageKeys
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)providerForDomain:(id)arg0 ;
-(id)stringForExpression:(id)arg0 ;


@end


#endif