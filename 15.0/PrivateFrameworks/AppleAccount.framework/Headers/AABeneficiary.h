// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AABENEFICIARY_H
#define AABENEFICIARY_H

@class AKInheritanceAccessKey, NSString, NSUUID;
@protocol AAInheritanceContact, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AABeneficiary : NSObject <AAInheritanceContact, NSCopying, NSSecureCoding>



@property (retain, nonatomic) AKInheritanceAccessKey *accessKey; // ivar: _accessKey
@property (readonly, nonatomic) NSString *benefactorAltDSID; // ivar: _benefactorAltDSID
@property (readonly, nonatomic) NSUUID *beneficiaryID; // ivar: _beneficiaryID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBeneficiaryID:(id)arg0 benefactorAltDSID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif