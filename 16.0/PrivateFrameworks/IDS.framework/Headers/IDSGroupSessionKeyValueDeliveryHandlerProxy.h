// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGROUPSESSIONKEYVALUEDELIVERYHANDLERPROXY_H
#define IDSGROUPSESSIONKEYVALUEDELIVERYHANDLERPROXY_H

@class NSString, NSUUID;
@protocol IDSXPCGroupSessionKeyValueDeliveryDelegate, IDSGroupSessionKeyValueDeliveryHandler;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionKeyValueDeliveryHandlerProxy : NSObject <IDSXPCGroupSessionKeyValueDeliveryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<IDSGroupSessionKeyValueDeliveryHandler> *handler; // ivar: _handler
@property (copy, nonatomic) NSUUID *handlerUUID; // ivar: _handlerUUID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHandler:(id)arg0 ;
-(void)handleGroupSessionKeyValues:(id)arg0 ;


@end


#endif