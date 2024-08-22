// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKCONTACTLESSPAYMENTSESSIONSTATE_H
#define NPKCONTACTLESSPAYMENTSESSIONSTATE_H

@class PKPass, NSDate, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NPKContactlessPaymentSessionManagerTransactionContext.h"

@interface NPKContactlessPaymentSessionState : NSObject <NSCopying>



@property (nonatomic) BOOL canChangePass; // ivar: _canChangePass
@property (nonatomic) NSUInteger completionReason; // ivar: _completionReason
@property (nonatomic) BOOL contactlessInterfaceReady; // ivar: _contactlessInterfaceReady
@property (retain, nonatomic) PKPass *currentPass; // ivar: _currentPass
@property (nonatomic) BOOL doublePressReceived; // ivar: _doublePressReceived
@property (retain, nonatomic) NSDate *doublePressTimestamp; // ivar: _doublePressTimestamp
@property (nonatomic) NSUInteger expressTransactionStatus; // ivar: _expressTransactionStatus
@property (nonatomic) NSUInteger failureType; // ivar: _failureType
@property (nonatomic) BOOL hasSession; // ivar: _hasSession
@property (nonatomic) BOOL inServiceMode; // ivar: _inServiceMode
@property (nonatomic) BOOL isSwitchingSessionType; // ivar: _isSwitchingSessionType
@property (nonatomic) BOOL passActivating; // ivar: _passActivating
@property (retain, nonatomic) PKPass *serviceModeRequestedPass; // ivar: _serviceModeRequestedPass
@property (nonatomic) BOOL sessionAuthorized; // ivar: _sessionAuthorized
@property (nonatomic) BOOL sessionStarted; // ivar: _sessionStarted
@property (nonatomic) NSUInteger sessionType; // ivar: _sessionType
@property (nonatomic) BOOL sessionWaitingToStart; // ivar: _sessionWaitingToStart
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NPKContactlessPaymentSessionManagerTransactionContext *transactionContext; // ivar: _transactionContext
@property (retain, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID


-(BOOL)isSessionStateValid;
-(CGFloat)validityInterval;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)stateForNonModalDisplay;


@end


#endif