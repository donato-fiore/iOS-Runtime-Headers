// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCREDENTIALMATCH_H
#define WBSCREDENTIALMATCH_H

@class NSString, NSDate, NSURLProtectionSpace, WBSSavedAccount;
@protocol WBSFormAutoFillItem;

#import <Foundation/Foundation.h>


@interface WBSCredentialMatch : NSObject <WBSFormAutoFillItem>



@property (readonly, nonatomic) NSString *completion;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *user;


-(id)initWithSavedAccount:(id)arg0 protectionSpace:(id)arg1 ;


@end


#endif