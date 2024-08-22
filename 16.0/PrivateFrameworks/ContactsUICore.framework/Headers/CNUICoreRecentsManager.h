// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICORERECENTSMANAGER_H
#define CNUICORERECENTSMANAGER_H

@class CRRecentContactsLibrary;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUICoreRecentsManager : NSObject

@property (readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary; // ivar: _recentsLibrary
@property (readonly, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


+(id)allHandlesToSearchForFromContact:(id)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)handlesForContactProperties:(id)arg0 ;
+(id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg0 ;
+(id)queryForHandles:(id)arg0 ;
+(id)queryForHandles:(id)arg0 sorted:(BOOL)arg1 ;
+(id)supportedPropertyDescriptions;
+(id)supportedRecentsDomains;
+(id)supportedRecentsKinds;
+(id)transformForPropertyDescription:(SEL)arg0 ;
-(id)initWithRecentsLibrary:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)recentContactsMatchingAllPropertiesOfContact:(id)arg0 ;
-(id)recentContactsMatchingContactProperties:(id)arg0 ;
-(id)recentsContactsMatchingHandles:(id)arg0 ;
-(id)recentsContactsMatchingHandles:(id)arg0 sorted:(BOOL)arg1 ;
-(id)sortedRecentHandlesMatchingAllPropertiesOfContact:(id)arg0 ;
-(void)removeRecents:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeRecentsWithIdentifiers:(id)arg0 domain:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif