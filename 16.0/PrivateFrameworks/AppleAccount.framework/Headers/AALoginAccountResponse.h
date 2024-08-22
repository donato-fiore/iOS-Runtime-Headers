// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AALOGINACCOUNTRESPONSE_H
#define AALOGINACCOUNTRESPONSE_H

@class NSString, NSDictionary, NSNumber;


#import "AAResponse.h"
#import "AALoginResponseAppleAccountInfo.h"
#import "AALoginResponseDataclasses.h"
#import "AALoginResponseiCloudTokens.h"

@interface AALoginAccountResponse : AAResponse

@property (readonly, nonatomic) AALoginResponseAppleAccountInfo *appleAccountInfo; // ivar: _appleAccountInfo
@property (readonly, nonatomic) AALoginResponseDataclasses *dataclasses; // ivar: _dataclasses
@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid
@property (readonly, nonatomic) AALoginResponseiCloudTokens *iCloudTokens; // ivar: _iCloudTokens
@property (readonly, nonatomic) NSDictionary *responseForDelegates; // ivar: _responseForDelegates
@property (readonly, nonatomic) NSNumber *status; // ivar: _status
@property (readonly, nonatomic) NSString *statusMessage; // ivar: _statusMessage


-(id)convertToLoginDelegatesResponse;
-(id)convertToProvisioningResponse;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(id)initWithHttpStatus:(NSInteger)arg0 responseBody:(id)arg1 ;
-(id)responseParametersForServiceIdentifier:(id)arg0 ;
-(void)_parseResponse:(NSInteger)arg0 responseBody:(id)arg1 ;


@end


#endif