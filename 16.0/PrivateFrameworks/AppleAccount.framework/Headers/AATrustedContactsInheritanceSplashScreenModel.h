// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AATRUSTEDCONTACTSINHERITANCESPLASHSCREENMODEL_H
#define AATRUSTEDCONTACTSINHERITANCESPLASHSCREENMODEL_H

@class NSString;
@protocol AAOBBulletedWelcomeControllerModelProtocol;

#import <Foundation/Foundation.h>

#import "AACustodianshipInfo.h"

@interface AATrustedContactsInheritanceSplashScreenModel : NSObject <AAOBBulletedWelcomeControllerModelProtocol>



@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle; // ivar: _helpLinkTitle
@property (copy, nonatomic) NSString *helpLinkURL; // ivar: _helpLinkURL
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)_firstBulletPointDescription;
-(id)_firstBulletPointSymbolName;
-(id)_firstBulletPointTitle;
-(id)_secondBulletPointDescription;
-(id)_secondBulletPointSymbolName;
-(id)_secondBulletPointTitle;
-(id)_thirdBulletPointDescription;
-(id)_thirdBulletPointSymbolName;
-(id)_thirdBulletPointTitle;
-(id)bullets;


@end


#endif