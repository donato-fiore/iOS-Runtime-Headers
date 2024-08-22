// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTUIUTILITIES_H
#define RTTUIUTILITIES_H

@class NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RTTUIUtilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue; // ivar: _callCenterQueue
@property (nonatomic) BOOL headphoneJackSupportsTTY; // ivar: _headphoneJackSupportsTTY
@property (nonatomic) BOOL inUnitTestMode; // ivar: _inUnitTestMode
@property (retain, nonatomic) NSNumber *overrideLTR; // ivar: _overrideLTR


+(BOOL)contactIsTTYContact:(id)arg0 ;
+(BOOL)hardwareTTYIsSupported;
+(BOOL)isOnlyRTTSupported;
+(BOOL)isRTTSupported;
+(BOOL)relayIsSupported;
+(BOOL)shouldUseRTT;
+(BOOL)softwareTTYIsSupported;
+(BOOL)ttyShouldBeRealtimeForCall:(id)arg0 ;
+(id)ASCIINumericStringFromString:(struct __CFString *)arg0 ;
+(id)phoneNumberStringFromString:(id)arg0 ;
+(id)relayPhoneNumber;
+(id)rttDisplayName:(NSInteger)arg0 forSubscriptionContextUUID:(id)arg1 ;
+(id)sharedUtilityProvider;
+(void)cancelCallPromptDisplay;
+(void)contactIsTTYContact:(id)arg0 resultBlock:(id)arg1 ;
+(void)displayCallPromptForContact:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg0 ;
-(BOOL)deleteConversationWithCallUID:(id)arg0 ;
-(NSInteger)textAlignmentForMe:(BOOL)arg0 ;
-(NSUInteger)currentPreferredTransportMethod;
-(id)bubbleColorForMe:(BOOL)arg0 ;
-(id)bubbleFillForMe:(BOOL)arg0 ;
-(id)conversationForCallUID:(id)arg0 ;
-(id)init;
-(id)largeTTYIconWithTint:(id)arg0 ;
-(id)myPhoneNumber;
-(id)tintedTTYIcon;
-(id)transcriptStringForConversation:(id)arg0 ;
-(id)ttyIconWithTint:(id)arg0 ;
-(id)ttyMeContact;
-(struct UIEdgeInsets )bubbleInsetForMe:(BOOL)arg0 ;
-(struct UIEdgeInsets )textInsetForMe:(BOOL)arg0 ;


@end


#endif