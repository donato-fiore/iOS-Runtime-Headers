// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPASSISTANTCREDENTIAL_H
#define PKPAYMENTSETUPASSISTANTCREDENTIAL_H

@class PKPaymentSetupAssistantCoreCredential, PKPaymentCredential, NSString, UIImage;
@protocol PKPassSnapshotCoordinatableSource;



@interface PKPaymentSetupAssistantCredential : PKPaymentSetupAssistantCoreCredential <PKPassSnapshotCoordinatableSource>



@property (readonly, nonatomic) PKPaymentCredential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSnapshotFetchInProgress; // ivar: _isSnapshotFetchInProgress
@property (retain, nonatomic) UIImage *passSnapshot; // ivar: _passSnapshot
@property (readonly) Class superclass;




@end


#endif