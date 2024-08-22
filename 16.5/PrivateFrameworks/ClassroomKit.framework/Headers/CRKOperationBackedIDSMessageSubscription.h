// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKOPERATIONBACKEDIDSMESSAGESUBSCRIPTION_H
#define CRKOPERATIONBACKEDIDSMESSAGESUBSCRIPTION_H

@class NSString, CATRemoteTaskOperation;
@protocol CATTaskOperationNotificationDelegate, CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKOperationBackedIDSMessageSubscription : NSObject <CATTaskOperationNotificationDelegate, CRKCancelable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CATRemoteTaskOperation *listenOperation; // ivar: _listenOperation
@property (readonly) Class superclass;


-(id)initWithListenOperation:(id)arg0 handler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)taskOperation:(id)arg0 didPostNotificationWithName:(id)arg1 userInfo:(id)arg2 ;


@end


#endif