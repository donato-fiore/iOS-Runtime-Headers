// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTRANSFERAGENTDELIVERYCONTROLLER_H
#define IMTRANSFERAGENTDELIVERYCONTROLLER_H

@class FTMessageDelivery;

#import <Foundation/Foundation.h>


@interface IMTransferAgentDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery; // ivar: _messageDelivery


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendFTMessage:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif