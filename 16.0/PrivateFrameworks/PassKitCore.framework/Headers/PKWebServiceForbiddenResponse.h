// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWEBSERVICEFORBIDDENRESPONSE_H
#define PKWEBSERVICEFORBIDDENRESPONSE_H

@class NSNumber, NSString;


#import "PKWebServiceResponse.h"

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse

@property (copy, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(id)initWithData:(id)arg0 ;


@end


#endif