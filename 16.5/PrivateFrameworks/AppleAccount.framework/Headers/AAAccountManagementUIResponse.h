// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAACCOUNTMANAGEMENTUIRESPONSE_H
#define AAACCOUNTMANAGEMENTUIRESPONSE_H

@class NSData;


#import "AAResponse.h"

@interface AAAccountManagementUIResponse : AAResponse {
    NSData *_responseData;
}


@property (readonly, nonatomic) NSData *responseData;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif