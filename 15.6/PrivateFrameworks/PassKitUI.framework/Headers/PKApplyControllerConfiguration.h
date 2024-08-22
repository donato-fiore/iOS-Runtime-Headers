// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYCONTROLLERCONFIGURATION_H
#define PKAPPLYCONTROLLERCONFIGURATION_H

@class PKFeatureApplication, PKPaymentProvisioningController, NSString;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKApplyControllerConfiguration : NSObject

@property (nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (nonatomic) NSInteger context; // ivar: _context
@property (nonatomic) NSUInteger feature; // ivar: _feature
@property (retain, nonatomic) PKFeatureApplication *featureApplication; // ivar: _featureApplication
@property (nonatomic) NSUInteger featureProduct; // ivar: _featureProduct
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (nonatomic) NSInteger updateUserInfoSubType; // ivar: _updateUserInfoSubType


-(id)initWithSetupDelegate:(id)arg0 context:(NSInteger)arg1 provisioningController:(id)arg2 ;


@end


#endif