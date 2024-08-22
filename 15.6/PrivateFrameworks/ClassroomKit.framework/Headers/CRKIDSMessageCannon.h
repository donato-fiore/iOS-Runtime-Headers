// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIDSMESSAGECANNON_H
#define CRKIDSMESSAGECANNON_H

@protocol CRKIDSPrimitives;

#import <Foundation/Foundation.h>

#import "CRKIDSMessageFormatter.h"

@interface CRKIDSMessageCannon : NSObject

@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) CRKIDSMessageFormatter *messageFormatter; // ivar: _messageFormatter


-(id)initWithIDSPrimitives:(id)arg0 ;
-(void)sendIDSMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 completion:(id)arg3 ;
-(void)sendIDSMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;


@end


#endif