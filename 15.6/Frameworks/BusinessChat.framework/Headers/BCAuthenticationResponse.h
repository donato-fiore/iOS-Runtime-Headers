// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCAUTHENTICATIONRESPONSE_H
#define BCAUTHENTICATIONRESPONSE_H

@class NSString, NSArray, NSDictionary;
@protocol BCDictionarySerializable;

#import <Foundation/Foundation.h>

#import "BCError.h"

@interface BCAuthenticationResponse : NSObject <BCDictionarySerializable>

 {
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}


@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *token;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithToken:(id)arg0 error:(id)arg1 ;


@end


#endif