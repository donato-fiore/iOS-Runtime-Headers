// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBASEREMOTEQUARANTINEREQUEST_H
#define WFBASEREMOTEQUARANTINEREQUEST_H

@class NSString, NSDictionary;
@protocol MTLJSONSerializing, WFRemoteQuarantineRequest;


#import "MTLModel.h"

@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest>



@property (readonly, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorMessage;
@property (readonly, nonatomic) NSString *defaultLocalizedDeniedErrorTitle;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptMessage;
@property (readonly, nonatomic) NSString *defaultLocalizedPromptTitle;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSString *policyFunctionName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userLocale; // ivar: _userLocale


+(id)JSONKeyPathsByPropertyKey;
-(id)init;
-(id)javaScriptCoreRepresentationWithError:(*id)arg0 ;


@end


#endif