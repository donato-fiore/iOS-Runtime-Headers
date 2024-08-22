// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSENDDEVICESESSIONMESSAGEOPERATION_H
#define CATSENDDEVICESESSIONMESSAGEOPERATION_H

@protocol CATSharingDeviceSession, CATDictionaryCodable;


#import "CATOperation.h"

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    id<CATSharingDeviceSession> *mDeviceSession;
    id<CATDictionaryCodable> *mMessage;
}




-(BOOL)isAsynchronous;
-(id)initWithDeviceSession:(id)arg0 message:(id)arg1 ;
-(void)main;
-(void)sendMessage;


@end


#endif