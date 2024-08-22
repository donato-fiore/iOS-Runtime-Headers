// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILMESSAGESTORESEARCHRESULT_H
#define MFMAILMESSAGESTORESEARCHRESULT_H

@class NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFMailMessageStoreSearchResult : NSObject

@property (retain, nonatomic) NSDate *continueOffset; // ivar: _continueOffset
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSMutableDictionary *mailboxToRemoteIdDictionary; // ivar: _mailboxToRemoteIdDictionary


-(id)init;
-(void)addRemoteID:(id)arg0 mailbox:(id)arg1 ;
-(void)enumerateMailboxesAndRemoteIDsUsingBlock:(id)arg0 ;


@end


#endif