// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFINANCEACTIONRESPONSE_H
#define AMSFINANCEACTIONRESPONSE_H

@class NSURL, ACAccount, NSString;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSURLTaskInfo.h"

@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *creditString; // ivar: _creditString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (nonatomic) BOOL shouldRetry; // ivar: _shouldRetry
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo
@property (nonatomic) BOOL tidContinue; // ivar: _tidContinue


+(BOOL)_isModernURL:(id)arg0 taskInfo:(id)arg1 ;
+(id)_URLForCommerceUIFromURL:(id)arg0 taskInfo:(id)arg1 tidContinue:(BOOL)arg2 ;
+(id)_bodyObjectFromRequest:(id)arg0 ;
+(id)_deepLinkForURL:(id)arg0 taskInfo:(id)arg1 gotoType:(NSInteger)arg2 isAccountURL:(BOOL)arg3 tidContinue:(BOOL)arg4 ;
+(id)_presentEngagementForURL:(id)arg0 taskInfo:(id)arg1 ;
+(id)actionWithActionDictionary:(id)arg0 taskInfo:(id)arg1 ;
+(id)actionWithUpdatedCreditString:(id)arg0 account:(id)arg1 taskInfo:(id)arg2 ;
+(id)handleGotoURL:(id)arg0 taskInfo:(id)arg1 gotoType:(NSInteger)arg2 accountURL:(BOOL)arg3 tidContinue:(BOOL)arg4 retryOnSuccess:(BOOL)arg5 ;
+(void)handleExternalGotoURL:(id)arg0 ;
-(id)_handleGotoAction;
-(id)_performCreditDisplayUpdate;
-(id)initWithTaskInfo:(id)arg0 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif