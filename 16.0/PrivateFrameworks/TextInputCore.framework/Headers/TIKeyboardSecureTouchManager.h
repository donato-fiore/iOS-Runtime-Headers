// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDSECURETOUCHMANAGER_H
#define TIKEYBOARDSECURETOUCHMANAGER_H

@class BKSHIDEventAuthenticationMessage, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIKeyboardSecureTouchManager : NSObject

@property (nonatomic) BOOL bypassCommunication; // ivar: _bypassCommunication
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *lastEventAuthenticationMessage; // ivar: _lastEventAuthenticationMessage
@property (nonatomic) NSUInteger lastVerifiedMessageTimestamp; // ivar: _lastVerifiedMessageTimestamp
@property (retain, nonatomic) NSMutableDictionary *slots; // ivar: _slots


+(id)sharedInstance;
-(BOOL)verifySlotID:(unsigned int)arg0 ;
-(NSUInteger)authenticationMessageContextForSlotID:(unsigned int)arg0 ;
-(id)init;
-(void)clearRegistrations;
-(void)registerSlotID:(unsigned int)arg0 ;
-(void)touchEventWithAuthenticationMessage:(id)arg0 ;


@end


#endif