// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCONNECTIONASSISTANTSTATE_H
#define CTCONNECTIONASSISTANTSTATE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCAConnectionClosedState.h"
#import "CTCAConnectionState.h"
#import "CTCAConversationState.h"
#import "CTCATarget.h"
#import "CTCALocationState.h"
#import "CTCAServiceIntervals.h"
#import "CTCASilenceInterval.h"
#import "CTStewieState.h"
#import "CTCATargetVisibility.h"
#import "CTCATryOutState.h"

@interface CTConnectionAssistantState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *backupTargets; // ivar: _backupTargets
@property (retain, nonatomic) CTCAConnectionClosedState *connectionClosedState; // ivar: _connectionClosedState
@property (retain, nonatomic) CTCAConnectionState *connectionState; // ivar: _connectionState
@property (retain, nonatomic) CTCAConversationState *conversationState; // ivar: _conversationState
@property (retain, nonatomic) CTCATarget *currentTarget; // ivar: _currentTarget
@property (nonatomic) NSInteger internetInterface; // ivar: _internetInterface
@property (nonatomic) BOOL isEmergencyVoiceCallCapable; // ivar: _isEmergencyVoiceCallCapable
@property (retain, nonatomic) NSString *iso3166Alpha3CountryCode; // ivar: _iso3166Alpha3CountryCode
@property (retain, nonatomic) CTCALocationState *locationState; // ivar: _locationState
@property (retain, nonatomic) CTCAServiceIntervals *serviceIntervals; // ivar: _serviceIntervals
@property (retain, nonatomic) CTCASilenceInterval *silenceInterval; // ivar: _silenceInterval
@property (retain, nonatomic) CTStewieState *stewieState; // ivar: _stewieState
@property (retain, nonatomic) CTCATargetVisibility *targetVisibility; // ivar: _targetVisibility
@property (retain, nonatomic) CTCATryOutState *tryOutState; // ivar: _tryOutState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif