// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAACCOUNTRECOVERYMANAGEMENTVIEWMODEL_H
#define AAACCOUNTRECOVERYMANAGEMENTVIEWMODEL_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface AAAccountRecoveryManagementViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *appleDataRecoveryLabel;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, copy, nonatomic) NSString *detailsForIneligibleAccount;
@property (readonly, copy, nonatomic) NSURL *footerLearnMoreURL;
@property (readonly, copy, nonatomic) NSString *learnMore;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsAdd;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsFooter;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsFooterForIneligibleAccount;
@property (readonly, copy, nonatomic) NSString *myRecoveryContactsGroupTitle;
@property (readonly, copy, nonatomic) NSString *recoveryContactForGroupTitle;
@property (readonly, copy, nonatomic) NSString *recoveryKeyDetails;
@property (readonly, copy, nonatomic) NSString *recoveryKeyLabel;
@property (readonly, copy, nonatomic) NSString *title;


-(id)recoveryKeyStatusText:(BOOL)arg0 ;


@end


#endif