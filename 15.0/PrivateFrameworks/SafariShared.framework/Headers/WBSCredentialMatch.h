// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCREDENTIALMATCH_H
#define WBSCREDENTIALMATCH_H

@class NSURLCredential, NSURLProtectionSpace;


#import "WBSFormAutoFillItem.h"

@interface WBSCredentialMatch : WBSFormAutoFillItem

@property (readonly, nonatomic) NSURLCredential *credential; // ivar: _credential
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace


-(id)completion;
-(id)initWithCredential:(id)arg0 ;
-(id)initWithCredential:(id)arg0 protectionSpace:(id)arg1 ;


@end


#endif