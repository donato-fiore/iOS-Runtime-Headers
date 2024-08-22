// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAOBCUSTODIANINVITATIONMODEL_H
#define AAOBCUSTODIANINVITATIONMODEL_H

@class NSString;
@protocol AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AACustodianshipInfo.h"

@interface AAOBCustodianInvitationModel : NSObject <AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding>



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
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)detailsTextWithFirstName:(id)arg0 fullName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustodianshipInfo:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ownerHandle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif