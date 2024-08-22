// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDELEGATIONCONSUMERSERVICESESSIONREQUESTRESULT_H
#define ICDELEGATIONCONSUMERSERVICESESSIONREQUESTRESULT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>

#import "ICDelegateToken.h"

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject

@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken; // ivar: _delegateToken
@property (readonly, copy, nonatomic) NSError *resultError; // ivar: _resultError
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier


-(id)initWithDelegateToken:(id)arg0 storefrontIdentifier:(id)arg1 resultError:(id)arg2 ;


@end


#endif