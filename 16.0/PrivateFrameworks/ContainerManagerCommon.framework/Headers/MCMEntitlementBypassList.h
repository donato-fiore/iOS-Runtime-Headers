// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMENTITLEMENTBYPASSLIST_H
#define MCMENTITLEMENTBYPASSLIST_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MCMEntitlementBypassList : NSObject {
    NSSet" _bypassListedLookupByContainer;
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}


@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList; // ivar: _systemEntitlementBypassList
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList; // ivar: _systemGroupEntitlementBypassList


+(id)sharedBypassList;
-(BOOL)containerIdIsWellknown:(id)arg0 class:(NSUInteger)arg1 ;
-(BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)arg0 forContainerClass:(NSUInteger)arg1 containerIdentifier:(id)arg2 ;
-(BOOL)systemContainerIdIsWellknown:(id)arg0 ;
-(BOOL)systemGroupContainerIdIsWellknown:(id)arg0 ;
-(id)_convertArraysToSetsInNestedDictionary:(id)arg0 ;
-(id)initWithSystemContainerMapping:(id)arg0 systemGroupContainerMapping:(id)arg1 bypassListedContainerMapping:(id)arg2 bypassListedCodeSignIdentifierMapping:(id)arg3 ;
-(id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
-(id)wellknownContainerForId:(id)arg0 class:(NSUInteger)arg1 ;
-(id)wellknownSystemContainerForId:(id)arg0 ;
-(id)wellknownSystemContainers;
-(id)wellknownSystemGroupContainerForId:(id)arg0 ;
-(id)wellknownSystemGroupContainers;


@end


#endif