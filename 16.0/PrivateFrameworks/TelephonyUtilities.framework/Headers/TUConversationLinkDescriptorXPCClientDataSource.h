// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONLINKDESCRIPTORXPCCLIENTDATASOURCE_H
#define TUCONVERSATIONLINKDESCRIPTORXPCCLIENTDATASOURCE_H

@class NSString, NSXPCConnection;
@protocol TUConversationLinkDescriptorXPCClient, TUConversationLinkDescriptorDataSource, TUConversationLinkKeyValueDataSource, TUConversationLinkDescriptorDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface TUConversationLinkDescriptorXPCClientDataSource : NSObject <TUConversationLinkDescriptorXPCClient, TUConversationLinkDescriptorDataSource, TUConversationLinkKeyValueDataSource>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (retain, nonatomic) NSObject<TUConversationLinkDescriptorDataSourceDelegate> *conversationLinkDescriptorDataSourceDelegate; // ivar: _conversationLinkDescriptorDataSourceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)clientXPCInterface;
+(id)serverXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(BOOL)addConversationLinkDescriptors:(id)arg0 error:(*id)arg1 ;
-(BOOL)addOrUpdateConversationLinkDescriptors:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInteger:(NSInteger)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setString:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(NSInteger)integerForKey:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)conversationLinkDescriptorCountWithPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)removeConversationLinkDescriptorsWithPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)setActivated:(BOOL)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)setExpirationDate:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)setInvitedHandles:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)setName:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 error:(*id)arg3 ;
-(id)asynchronousServerWithErrorHandler:(id)arg0 ;
-(id)conversationLinkDescriptorsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)init;
-(id)stringForKey:(id)arg0 error:(*id)arg1 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)addConversationLinkDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateConversationLinkDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)conversationLinkDescriptorCountWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)conversationLinkDescriptorsDidChange;
-(void)conversationLinkDescriptorsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)integerForKey:(id)arg0 completion:(id)arg1 ;
-(void)removeConversationLinkDescriptorsWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)setActivated:(BOOL)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 completion:(id)arg3 ;
-(void)setExpirationDate:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 completion:(id)arg3 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setInvitedHandles:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 completion:(id)arg3 ;
-(void)setName:(id)arg0 withRevision:(NSInteger)arg1 forConversationLinkDescriptorsWithPredicate:(id)arg2 completion:(id)arg3 ;
-(void)setString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)stringForKey:(id)arg0 completion:(id)arg1 ;


@end


#endif