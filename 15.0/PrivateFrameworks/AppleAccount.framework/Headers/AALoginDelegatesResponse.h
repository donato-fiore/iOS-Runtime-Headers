// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AALOGINDELEGATESRESPONSE_H
#define AALOGINDELEGATESRESPONSE_H

@class NSString, NSDictionary, NSNumber;


#import "AAResponse.h"

@interface AALoginDelegatesResponse : AAResponse

@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSDictionary *responseParameters;
@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *statusMessage;


-(id)augmentedResponseParametersForServiceIdentifier:(id)arg0 withAppleID:(id)arg1 password:(id)arg2 DSID:(id)arg3 altDSID:(id)arg4 ;
-(id)responseParametersForServiceIdentifier:(id)arg0 ;


@end


#endif