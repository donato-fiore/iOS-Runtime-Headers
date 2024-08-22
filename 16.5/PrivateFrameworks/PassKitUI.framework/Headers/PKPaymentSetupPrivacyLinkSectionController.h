// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPRIVACYLINKSECTIONCONTROLLER_H
#define PKPAYMENTSETUPPRIVACYLINKSECTIONCONTROLLER_H

@class OBPrivacyLinkController;


#import "PKPaymentSetupListSectionController.h"

@interface PKPaymentSetupPrivacyLinkSectionController : PKPaymentSetupListSectionController

@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink


-(id)init;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif