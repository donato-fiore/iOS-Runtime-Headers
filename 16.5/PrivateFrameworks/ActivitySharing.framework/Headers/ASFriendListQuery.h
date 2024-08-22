// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFRIENDLISTQUERY_H
#define ASFRIENDLISTQUERY_H

@class HKQuery, NSString;
@protocol ASFriendListQueryClientInterface;



@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface>

 {
    id *_updateHandler;
    int _mostRecentToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsTaskServers;
+(id)clientInterfaceProtocol;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)client_deliverFriendList:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif