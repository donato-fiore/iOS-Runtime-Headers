// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRRECENTCONTACTSLIBRARY_H
#define CRRECENTCONTACTSLIBRARY_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRRecentContactsLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_connection;
}




+(id)_recentEventForGroupMembers:(id)arg0 displayName:(id)arg1 date:(id)arg2 weight:(id)arg3 metadata:(id)arg4 options:(NSUInteger)arg5 ;
+(id)apiLogDescriptionOfEvent:(id)arg0 ;
+(id)defaultInstance;
+(id)explicitGroupEventForGroupMembers:(id)arg0 displayName:(id)arg1 date:(id)arg2 metadata:(id)arg3 options:(NSUInteger)arg4 ;
+(id)frecencyComparator:(SEL)arg0 ;
+(id)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(id)arg2 ;
+(id)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(id)arg2 queryOptions:(id)arg3 ;
+(id)groupMemberWithAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 ;
+(id)rankedFrecencyComparatorWithPreferredSources:(SEL)arg0 ;
+(id)recentEventForAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 date:(id)arg3 ;
+(id)recentEventForAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 date:(id)arg3 metadata:(id)arg4 ;
+(id)recentEventForAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 ;
+(id)recentEventForAddress:(id)arg0 displayName:(id)arg1 kind:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(NSUInteger)arg6 ;
-(BOOL)_removeRecentContactsWithRecentIDs:(id)arg0 syncKeys:(id)arg1 recentsDomain:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeRecentContacts:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeRecentContactsWithRecentIDs:(id)arg0 recentsDomain:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)maxDateEventsPerRecentContact;
-(id)_newConnection;
-(id)_recentContactsWithQuery:(id)arg0 ;
-(id)_remoteLibraryWithErrorHandler:(id)arg0 ;
-(id)_removeRecentContactsMatchingQuery:(id)arg0 ;
-(id)_searchRecentsUsingQuery:(id)arg0 ;
-(id)_searchRecentsUsingQuery:(id)arg0 error:(*id)arg1 ;
-(id)copyOrderedRecentsForSearchText:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 kinds:(id)arg3 ;
-(id)copyRecentsForDomain:(id)arg0 ;
-(id)init;
-(int)_daemonProcessID;
-(void)_recordContactEvents:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 source:(id)arg3 userInitiated:(BOOL)arg4 completion:(id)arg5 ;
-(void)_removeAllRecentContactsWithCompletion:(id)arg0 ;
-(void)_searchRecentsUsingQuery:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)performRecentsSearch:(id)arg0 operationQueue:(id)arg1 completion:(id)arg2 ;
-(void)performRecentsSearch:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)recordContactEvents:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 ;
-(void)recordContactEvents:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 completion:(id)arg3 ;
-(void)recordContactEvents:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 source:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)recordContactEvents:(id)arg0 recentsDomain:(id)arg1 sendingAddress:(id)arg2 userInitiated:(BOOL)arg3 ;
// -(void)requestRecentsUsingPredicate:(id)arg0 inDomains:(id)arg1 comparator:(id)arg2 queue:(unk)arg3 completion:(id)arg4  ;
-(void)setImplicitGroupThreshold:(NSUInteger)arg0 forDomain:(id)arg1 ;
-(void)start;


@end


#endif