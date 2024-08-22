// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSHARINGAUTHORIZATIONRECIPIENTSTORETASKCONFIGURATION_H
#define HKSHARINGAUTHORIZATIONRECIPIENTSTORETASKCONFIGURATION_H

@class NSArray;


#import "HKTaskConfiguration.h"

@interface HKSharingAuthorizationRecipientStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSArray *sharingAuthorizations; // ivar: _sharingAuthorizations


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif