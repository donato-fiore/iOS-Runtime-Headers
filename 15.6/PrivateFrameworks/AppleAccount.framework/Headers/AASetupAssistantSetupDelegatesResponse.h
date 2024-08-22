// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASETUPASSISTANTSETUPDELEGATESRESPONSE_H
#define AASETUPASSISTANTSETUPDELEGATESRESPONSE_H

@class NSString, NSDictionary, NSNumber;


#import "AAResponse.h"

@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSDictionary *responseParameters;
@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;


-(id)responseParametersForServiceIdentifier:(id)arg0 ;


@end


#endif