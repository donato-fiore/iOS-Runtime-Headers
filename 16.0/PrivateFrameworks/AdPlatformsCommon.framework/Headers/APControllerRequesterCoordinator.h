// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APCONTROLLERREQUESTERCOORDINATOR_H
#define APCONTROLLERREQUESTERCOORDINATOR_H

@class APXPCActionRequester, APUnfairRecursiveLock, NSMutableDictionary;
@protocol APPCControllerClientInterface;



@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>



@property (retain, nonatomic) APUnfairRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *requestDelegates; // ivar: _requestDelegates


+(BOOL)canShareConnection;
+(id)machService;
+(id)requestCoordinator;
-(id)exportedInterface;
-(id)exportedObject;
-(id)init;
-(id)proxyURLForRequester:(id)arg0 ;
-(id)remoteObjectInterface;
-(void)_addDelegate:(id)arg0 withID:(id)arg1 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)contentResponses:(id)arg0 requester:(id)arg1 ;
-(void)extendCollectionClassesForExportedInterface:(id)arg0 ;
-(void)finishedWithRequestsForID:(id)arg0 ;
-(void)preWarm:(id)arg0 forRequester:(id)arg1 ;
-(void)proxyURLForRequester:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestPromotedContentOfTypes:(id)arg0 forRequester:(id)arg1 forContext:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif