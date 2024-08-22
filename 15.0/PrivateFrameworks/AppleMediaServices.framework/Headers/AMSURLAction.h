// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSURLACTION_H
#define AMSURLACTION_H

@class NSError, NSString, NSURL, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSAuthenticateResult.h"
#import "AMSDialogResult.h"

@interface AMSURLAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) AMSAuthenticateResult *authenticateResult; // ivar: _authenticateResult
@property (retain, nonatomic) AMSDialogResult *dialogResult; // ivar: _dialogResult
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSURL *redirectURL; // ivar: _redirectURL
@property (retain, nonatomic) NSString *retryIdentifier; // ivar: _retryIdentifier
@property (retain, nonatomic) NSData *updatedBody; // ivar: _updatedBody
@property (retain, nonatomic) NSDictionary *updatedHeaders; // ivar: _updatedHeaders
@property (retain, nonatomic) NSString *updatedMethod; // ivar: _updatedMethod


+(BOOL)supportsSecureCoding;
+(id)actionWithError:(id)arg0 ;
+(id)proceedAction;
+(id)redirectActionWithURL:(id)arg0 ;
+(id)retryAction;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 error:(id)arg1 reason:(id)arg2 redirectURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif