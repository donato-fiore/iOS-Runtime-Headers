// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPASSISTANTCOREPROVISIONINGCONTEXT_H
#define PKPAYMENTSETUPASSISTANTCOREPROVISIONINGCONTEXT_H

@class NSMutableIndexSet, NSString, NSIndexSet, NSArray;
@protocol PKPaymentProvisioningControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentProvisioningController.h"

@interface PKPaymentSetupAssistantCoreProvisioningContext : NSObject <PKPaymentProvisioningControllerDelegate>

 {
    NSMutableIndexSet *_mutableSelectedIndices;
    NSUInteger _maximumSelectable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly, retain, nonatomic) NSIndexSet *selectedIndices; // ivar: _selectedIndices
@property (readonly, retain, nonatomic) NSArray *setupAssistantCoreCredentials; // ivar: _setupAssistantCoreCredentials
@property (readonly) Class superclass;


-(BOOL)canSelectIndex:(NSUInteger)arg0 ;
-(BOOL)selectIndex:(NSUInteger)arg0 ;
-(id)_paymentCredentials;
-(id)initWithProvisioningController:(id)arg0 setupAssistantCredentials:(id)arg1 maximumSelectable:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif