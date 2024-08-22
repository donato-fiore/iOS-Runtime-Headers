// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICEAPPLYRESPONSE_H
#define PKAPPLYWEBSERVICEAPPLYRESPONSE_H

@class NSSet;


#import "PKApplyWebServiceResponse.h"
#import "PKAccount.h"
#import "PKFeatureApplication.h"

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSSet *actionIdentifiersRequiringAuthentication; // ivar: _actionIdentifiersRequiringAuthentication
@property (readonly, nonatomic) PKFeatureApplication *featureApplication; // ivar: _featureApplication
@property (readonly, nonatomic) NSUInteger requiredDeviceMetadataFields; // ivar: _requiredDeviceMetadataFields
@property (readonly, nonatomic) BOOL requiresODIAssessment; // ivar: _requiresODIAssessment


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)nextStepInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif