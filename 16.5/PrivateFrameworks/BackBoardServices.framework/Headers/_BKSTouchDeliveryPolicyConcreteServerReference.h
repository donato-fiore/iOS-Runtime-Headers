// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BKSTOUCHDELIVERYPOLICYCONCRETESERVERREFERENCE_H
#define _BKSTOUCHDELIVERYPOLICYCONCRETESERVERREFERENCE_H

@class NSString;
@protocol BKSTouchDeliveryPolicyServerInterface;

#import <Foundation/Foundation.h>

#import "_BKSTouchDeliveryPolicyConcreteServerInterface.h"

@interface _BKSTouchDeliveryPolicyConcreteServerReference : NSObject <BKSTouchDeliveryPolicyServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _BKSTouchDeliveryPolicyConcreteServerInterface *server; // ivar: _server
@property (readonly) Class superclass;


-(void)ipc_addPolicy:(id)arg0 ;


@end


#endif