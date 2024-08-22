// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAOBINHERITANCEINVITATIONMODEL_H
#define AAOBINHERITANCEINVITATIONMODEL_H

@class NSString;
@protocol AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AACustodianshipInfo.h"

@interface AAOBInheritanceInvitationModel : NSObject <AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding>



@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo; // ivar: _custodianshipInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle; // ivar: _helpLinkTitle
@property (copy, nonatomic) NSString *helpLinkURL; // ivar: _helpLinkURL
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle; // ivar: _ownerHandle
@property (copy, nonatomic) NSString *primaryButton; // ivar: _primaryButton
@property (copy, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (copy, nonatomic) NSString *secondaryButton; // ivar: _secondaryButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBenefactorHandle:(id)arg0 ;
-(id)initWithBenefactorName:(id)arg0 handle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif