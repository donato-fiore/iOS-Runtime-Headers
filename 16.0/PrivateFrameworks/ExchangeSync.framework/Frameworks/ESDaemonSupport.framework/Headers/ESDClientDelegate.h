// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESDCLIENTDELEGATE_H
#define ESDCLIENTDELEGATE_H

@class DADisableableObject, NSString;


#import "ESDClient.h"

@interface ESDClientDelegate : DADisableableObject

@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (weak, nonatomic) ESDClient *client; // ivar: _client
@property (nonatomic) BOOL consumerCancelled; // ivar: _consumerCancelled
@property (retain, nonatomic) NSString *delegateID; // ivar: _delegateID
@property (nonatomic) BOOL finished; // ivar: _finished


-(id)initWithAccountID:(id)arg0 client:(id)arg1 ;
-(void)dealloc;
-(void)disable;
-(void)finishWithError:(id)arg0 ;
-(void)userRequestsCancel;


@end


#endif