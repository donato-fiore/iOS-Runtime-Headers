// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCNATIVEOAUTH2RESPONSE_H
#define BCNATIVEOAUTH2RESPONSE_H

@class NSString, NSArray, NSDictionary;
@protocol BCOAuth2ResponseProtocol;

#import <Foundation/Foundation.h>

#import "BCError.h"

@interface BCNativeOAuth2Response : NSObject <BCOAuth2ResponseProtocol>

 {
    NSString *_token;
    NSArray *_errors;
}


@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) BCError *error;
@property (nonatomic) NSInteger status; // ivar: _status


-(id)initWithToken:(id)arg0 error:(id)arg1 ;


@end


#endif