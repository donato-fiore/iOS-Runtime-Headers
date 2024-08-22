// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLTRANSPORTSCOPEMAPPING_H
#define CPLTRANSPORTSCOPEMAPPING_H

@class NSMutableDictionary;
@protocol CPLTransportScopeTranslator;

#import <Foundation/Foundation.h>


@interface CPLTransportScopeMapping : NSObject {
    NSMutableDictionary *_mapping;
    NSMutableDictionary *_sharedScopeIdentifierMapping;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) BOOL hasStagingScopes; // ivar: _hasStagingScopes
@property (readonly, nonatomic) NSObject<CPLTransportScopeTranslator> *translator; // ivar: _translator


-(BOOL)_addAllTransportScopesForScope:(id)arg0 scopes:(id)arg1 allowsTentativeTransportScope:(BOOL)arg2 useStagingScopeIfNecessary:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_addTransportScopeForScope:(id)arg0 scopes:(id)arg1 allowsTentativeTransportScope:(BOOL)arg2 useStagingScopeIfNecessary:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_checkTransportScopeForScopeIdentifier:(id)arg0 hasConcreteScope:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)addTransportScopeForScope:(id)arg0 scopes:(id)arg1 allowsTentativeTransportScope:(BOOL)arg2 useStagingScopeIfNecessary:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)addTransportScopeForScopeIdentifier:(id)arg0 scopes:(id)arg1 useStagingScopeIfNecessary:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)hasConcreteScopeForScopeWithIdentifier:(id)arg0 ;
-(BOOL)shouldSetSharedScopeIdentifierForScopeWithIdentifier:(id)arg0 ;
-(id)concreteScopeForScopeWithIdentifier:(id)arg0 ;
-(id)description;
-(id)initWithTranslator:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)redactedDescription;
-(id)sharedScopeIdentifierForScopeWithIdentifier:(id)arg0 ;
-(void)addConcreteScope:(id)arg0 forScopeWithIdentifier:(id)arg1 ;
-(void)addTransportScope:(id)arg0 forScopeWithIdentifier:(id)arg1 ;
-(void)enumerateConcreteScopesWithBlock:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setSharedScopeIdentifier:(id)arg0 forScopeWithIdentifier:(id)arg1 ;
-(void)updateWithTransportScopeMapping:(id)arg0 ;


@end


#endif