// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAICLOUDTERMSAGREEREQUEST_H
#define AAICLOUDTERMSAGREEREQUEST_H

@class ACAccount, NSDictionary;


#import "AARequest.h"

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (nonatomic) BOOL preferPassword; // ivar: _preferPassword


+(Class)responseClass;
-(id)initWithURLString:(id)arg0 account:(id)arg1 ;
-(id)urlRequest;
-(void)performRequestWithHandler:(id)arg0 ;


@end


#endif