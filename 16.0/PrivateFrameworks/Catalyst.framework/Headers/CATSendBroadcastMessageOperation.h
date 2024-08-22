// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSENDBROADCASTMESSAGEOPERATION_H
#define CATSENDBROADCASTMESSAGEOPERATION_H

@protocol CATSharingBroadcastPrimitives, CATDictionaryCodable;


#import "CATOperation.h"

@interface CATSendBroadcastMessageOperation : CATOperation {
    id<CATSharingBroadcastPrimitives> *mBroadcastPrimitives;
    id<CATDictionaryCodable> *mMessage;
}




-(BOOL)isAsynchronous;
-(id)initWithBroadcastPrimitive:(id)arg0 message:(id)arg1 ;
-(void)main;
-(void)sendMessage;


@end


#endif