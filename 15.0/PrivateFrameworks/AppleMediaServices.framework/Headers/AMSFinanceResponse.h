// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFINANCERESPONSE_H
#define AMSFINANCERESPONSE_H

@class ACAccount, NSArray, NSDictionary, NSError, NSURL;

#import <Foundation/Foundation.h>

#import "AMSFinanceAuthenticateResponse.h"
#import "AMSFinanceDialogResponse.h"
#import "AMSFinancePaymentSheetResponse.h"
#import "AMSURLTaskInfo.h"

@interface AMSFinanceResponse : NSObject

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse; // ivar: _cachedAuthenticateResponse
@property (retain, nonatomic) AMSFinanceDialogResponse *cachedDialogResponse; // ivar: _cachedDialogResponse
@property (retain, nonatomic) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse; // ivar: _cachedPaymentSheetResponse
@property (readonly, nonatomic) NSInteger dialogKind; // ivar: _dialogKind
@property (readonly, nonatomic) NSArray *pingURLs;
@property (retain, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) NSError *serverError;
@property (readonly, nonatomic) BOOL supportedProtocolVersion;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo
@property (readonly, nonatomic) NSURL *versionMismatchURL;


+(id)valueForProtocolKey:(id)arg0 inResponse:(id)arg1 ;
-(id)_performerForActionDictionary;
-(id)_performerForAuthenticate;
-(id)_performerForCreditDisplay;
-(id)_performerForDialog;
-(id)_performerForPaymentSheetWithDelegateAuthentication:(BOOL)arg0 ;
-(id)_valueForProtocolKey:(id)arg0 ;
-(id)initWithTaskInfo:(id)arg0 decodedObject:(id)arg1 ;


@end


#endif