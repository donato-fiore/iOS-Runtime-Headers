// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAOBINHERITANCESHAREACCESSKEYOPTIONSMODEL_H
#define AAOBINHERITANCESHAREACCESSKEYOPTIONSMODEL_H

@class NSString;
@protocol AAOBWelcomeControllerModelProtocol;

#import <Foundation/Foundation.h>

#import "AACustodianshipInfo.h"

@interface AAOBInheritanceShareAccessKeyOptionsModel : NSObject <AAOBWelcomeControllerModelProtocol>

 {
    NSString *_beneficiaryName;
}


@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle; // ivar: _helpLinkTitle
@property (copy, nonatomic) NSString *helpLinkURL; // ivar: _helpLinkURL
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton; // ivar: _primaryButton
@property (copy, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (copy, nonatomic) NSString *secondaryButton; // ivar: _secondaryButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)availableSharingOptions;
-(id)defaultSharingOptions;
-(id)detailTextForShareAccessKeyType:(NSUInteger)arg0 ;
-(id)initWithBeneficiaryName:(id)arg0 ;
-(id)initWithBeneficiaryName:(id)arg0 handle:(id)arg1 ;
-(id)titleForShareAccessKeyType:(NSUInteger)arg0 ;
-(void)availableSharingOptionsWithCompletion:(id)arg0 ;


@end


#endif