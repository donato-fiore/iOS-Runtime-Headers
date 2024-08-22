// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBUSINESSCHATACCOUNTCONTEXT_H
#define PKBUSINESSCHATACCOUNTCONTEXT_H

@class PKAccount, PKAccountSupportTopic, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatAccountContext : NSObject <PKBusinessChatContext>

 {
    PKAccount *_account;
    PKAccountSupportTopic *_topic;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithAccount:(id)arg0 topic:(id)arg1 ;
-(id)intentParameters;


@end


#endif