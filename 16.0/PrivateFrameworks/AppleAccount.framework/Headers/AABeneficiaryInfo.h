// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AABENEFICIARYINFO_H
#define AABENEFICIARYINFO_H

@class AKInheritanceAccessKey, NSString, NSUUID;
@protocol AAInheritanceContactInfo, NSCopying, NSSecureCoding;


#import "AABeneficiary.h"

@interface AABeneficiaryInfo : AABeneficiary <AAInheritanceContactInfo, NSCopying, NSSecureCoding>



@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly, nonatomic) NSString *benefactorAltDSID;
@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBeneficiaryID:(id)arg0 benefactorAltDSID:(id)arg1 handle:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif