// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFINANCEDELEGATEAUTHENTICATECHALLENGERESPONSE_H
#define AMSFINANCEDELEGATEAUTHENTICATECHALLENGERESPONSE_H

@class NSString, NSDictionary;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSURLTaskInfo.h"

@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject <AMSFinancePerformable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo


+(BOOL)isDelegateAuthChallengeForTaskInfo:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 taskInfo:(id)arg1 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif