// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPPREFLIGHTUSERINTERACTION_H
#define FPPREFLIGHTUSERINTERACTION_H

@class NSString, NSPredicate, NSArray;

#import <Foundation/Foundation.h>

#import "FPPreflightUserInteractionAlert.h"

@interface FPPreflightUserInteraction : NSObject

@property (retain, nonatomic) FPPreflightUserInteractionAlert *alert; // ivar: _alert
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (nonatomic) BOOL hasSuppressionIdentifier; // ivar: _hasSuppressionIdentifier
@property (nonatomic) NSString *helpURL; // ivar: _helpURL
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (retain, nonatomic) NSArray *subInteractions; // ivar: _subInteractions
@property (nonatomic) NSString *userInteractionIdentifier; // ivar: _userInteractionIdentifier


+(id)evaluationObjectsForAction:(id)arg0 sourceItems:(id)arg1 destinationItem:(id)arg2 domainUserInfo:(id)arg3 sourceItemKeysAllowList:(id)arg4 destinationItemKeysAllowList:(id)arg5 ;
+(id)gatherErrorsForInteractions:(id)arg0 evaluationObjects:(id)arg1 suppressionDelegate:(id)arg2 ;
+(id)interactionFromDictionary:(id)arg0 localizationLookup:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 ;
+(id)interactionsForArray:(id)arg0 localizationLookup:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 ;
+(id)interactionsForBundle:(id)arg0 providerIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)interactionsForProviderItem:(id)arg0 error:(*id)arg1 ;
+(id)userInteractionErrorsInInfoPlistDict:(id)arg0 forAction:(id)arg1 bundleID:(id)arg2 hierarchyServicer:(id)arg3 sourceNSFPItems:(id)arg4 destinationNSFPItem:(id)arg5 localizationLookup:(id)arg6 provider:(id)arg7 domain:(id)arg8 extensionCapabilities:(NSUInteger)arg9 useFPFS:(BOOL)arg10 ;
+(void)propagateConfigurationKeysDownInteractionTreeWithObject:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(id)_evaluateWithObjectsByName:(id)arg0 sourceItems:(id)arg1 suppressionDelegate:(id)arg2 errorIndex:(*NSUInteger)arg3 ;
-(id)description;
-(id)evaluateWithObjectsByName:(id)arg0 suppressionDelegate:(id)arg1 ;


@end


#endif