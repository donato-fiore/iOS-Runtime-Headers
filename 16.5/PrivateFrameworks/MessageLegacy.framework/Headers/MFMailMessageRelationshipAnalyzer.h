// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILMESSAGERELATIONSHIPANALYZER_H
#define MFMAILMESSAGERELATIONSHIPANALYZER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MFMailMessageRelationshipAnalyzer : NSObject {
    NSArray *_messages;
    NSArray *_relationships;
}




+(BOOL)isMessage:(id)arg0 addressedToMailingListForMessage:(id)arg1 ;
+(BOOL)isMessage:(id)arg0 addressedToPreviousSender:(id)arg1 ;
+(BOOL)isMessage:(id)arg0 forwardOfMessage:(id)arg1 myEmailAddresses:(id)arg2 ;
+(BOOL)isMessage:(id)arg0 responseToMessage:(id)arg1 previousSenders:(id)arg2 myEmailAddresses:(id)arg3 ;
+(BOOL)isMessage:(id)arg0 sentByAddress:(id)arg1 ;
+(BOOL)isMessageDraft:(id)arg0 ;
+(NSUInteger)relationOfMessage:(id)arg0 toMessage:(id)arg1 ;
+(NSUInteger)relationOfMessage:(id)arg0 toMessage:(id)arg1 previousSenders:(id)arg2 myEmailAddresses:(id)arg3 ;
+(id)analysisOfConversation:(id)arg0 ;
+(id)analyzeMessages:(id)arg0 myEmailAddresses:(id)arg1 ;
+(id)myEmailAddresses;
+(id)recipientsOfMessage:(id)arg0 ;
+(id)sendersOfMessage:(id)arg0 ;
-(NSUInteger)relationOfMessage:(id)arg0 ;
-(id)initWithMessages:(id)arg0 relationships:(id)arg1 ;
-(void)dealloc;


@end


#endif