// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SARDSTARTCORRECTEDSERVERREQUEST_H
#define SARDSTARTCORRECTEDSERVERREQUEST_H

@class NSString;


#import "SARDStartServerRequest.h"

@interface SARDStartCorrectedServerRequest : SARDStartServerRequest

@property (copy, nonatomic) NSString *interactionIdToBeCorrected;
@property (copy, nonatomic) NSString *utteranceToBeCorrected;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif