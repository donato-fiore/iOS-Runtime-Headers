// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSHARINGRECIPIENTAUTHORIZATIONSTORETASKCONFIGURATION_H
#define HKSHARINGRECIPIENTAUTHORIZATIONSTORETASKCONFIGURATION_H



#import "HKTaskConfiguration.h"
#import "HKSharingRecipientIdentifier.h"

@interface HKSharingRecipientAuthorizationStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier; // ivar: _recipientIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif