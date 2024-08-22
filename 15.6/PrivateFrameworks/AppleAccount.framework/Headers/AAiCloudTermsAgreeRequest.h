// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAICLOUDTERMSAGREEREQUEST_H
#define AAICLOUDTERMSAGREEREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL preferPassword; // ivar: _preferPassword


+(Class)responseClass;
-(id)initWithURLString:(id)arg0 account:(id)arg1 ;
-(id)urlRequest;
-(void)performRequestWithHandler:(id)arg0 ;


@end


#endif