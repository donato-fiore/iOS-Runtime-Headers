// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOAUTHORIZATIONRESULTCORE_H
#define SOAUTHORIZATIONRESULTCORE_H

@class NSDictionary, NSData, NSHTTPURLResponse, NSArray;

#import <Foundation/Foundation.h>


@interface SOAuthorizationResultCore : NSObject

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders; // ivar: _httpAuthorizationHeaders
@property (retain, nonatomic) NSData *httpBody; // ivar: _httpBody
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (retain, nonatomic) NSArray *privateKeys; // ivar: _privateKeys


-(id)init;
-(id)initWithHTTPAuthorizationHeaders:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 httpBody:(id)arg1 ;


@end


#endif