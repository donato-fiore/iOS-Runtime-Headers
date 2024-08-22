// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOAUTHORIZATIONRESULT_H
#define SOAUTHORIZATIONRESULT_H

@class SOAuthorizationResultCore, NSDictionary, NSData, NSHTTPURLResponse, NSArray;

#import <Foundation/Foundation.h>


@interface SOAuthorizationResult : NSObject {
    SOAuthorizationResultCore *_authorizationResultCore;
}


@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSArray *privateKeys;


-(id)init;
-(id)initWithHTTPAuthorizationHeaders:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 httpBody:(id)arg1 ;


@end


#endif