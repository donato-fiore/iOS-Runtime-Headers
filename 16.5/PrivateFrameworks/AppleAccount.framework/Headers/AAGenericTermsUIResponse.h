// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAGENERICTERMSUIRESPONSE_H
#define AAGENERICTERMSUIRESPONSE_H

@class NSDictionary, NSString, NSData;


#import "AAResponse.h"

@interface AAGenericTermsUIResponse : AAResponse {
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}


@property (readonly, nonatomic) NSString *agreeURL;
@property (readonly, nonatomic) NSData *responseData;
@property (readonly, nonatomic) NSDictionary *termsDictionary;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif