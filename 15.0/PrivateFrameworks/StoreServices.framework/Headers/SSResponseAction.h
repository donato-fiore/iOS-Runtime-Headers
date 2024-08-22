// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRESPONSEACTION_H
#define SSRESPONSEACTION_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SSAccount.h"
#import "SSDialog.h"

@interface SSResponseAction : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSInteger URLBagType; // ivar: _urlBagType
@property (readonly, nonatomic) SSAccount *account; // ivar: _account
@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSString *creditsString; // ivar: _creditsString
@property (readonly, nonatomic) SSDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSString *footerSection; // ivar: _footerSection


+(id)_actionWithActionType:(id)arg0 ;
+(id)_checkInAppQueueActionWithClientID:(id)arg0 environment:(id)arg1 ;
+(id)_dialogActionWithDialog:(id)arg0 ;
+(id)_dialogActionWithTouchIDDialog:(id)arg0 ;
+(id)_selectFooterActionWithSection:(id)arg0 ;
+(id)_setActiveAccountActionWithAccount:(id)arg0 ;
+(id)_setCreditsActionWithCredits:(id)arg0 account:(id)arg1 ;
+(id)_urlActionWithType:(id)arg0 URL:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif