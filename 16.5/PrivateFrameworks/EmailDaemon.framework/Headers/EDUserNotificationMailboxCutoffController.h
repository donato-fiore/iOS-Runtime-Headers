// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDUSERNOTIFICATIONMAILBOXCUTOFFCONTROLLER_H
#define EDUSERNOTIFICATIONMAILBOXCUTOFFCONTROLLER_H

@class NSString, NSMutableDictionary;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDUserNotificationMailboxCutoffController : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *mailboxCutoffs; // ivar: _mailboxCutoffs
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_shouldUpdateCutoffForMessage:(id)arg0 ;
-(BOOL)_updateCutoffForMailbox:(id)arg0 date:(id)arg1 ;
-(BOOL)isMessageAboveMailboxCutoff:(id)arg0 ;
-(id)cutoffDateForMailbox:(id)arg0 ;
-(void)_initializeIfNeeded;
-(void)_readFromDefaults;
-(void)_writeToDefaults;
-(void)clearCutoffForMailbox:(id)arg0 ;
-(void)updateCutoffForMailboxesWithMessages:(id)arg0 ;


@end


#endif