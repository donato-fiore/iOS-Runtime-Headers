// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPDOMAINMANAGER_H
#define SPDOMAINMANAGER_H


#import <Foundation/Foundation.h>


@interface SPDomainManager : NSObject



+(id)defaultManager;
+(void)initialize;
-(BOOL)siriSuggestionsEnabled;
-(id)getBundleIdForDomainNumber:(id)arg0 ;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg0 ;
-(void)applicationWasUninstalled:(id)arg0 ;
-(void)notifyIndexer;
-(void)registerApplication:(id)arg0 withCategories:(id)arg1 ;


@end


#endif