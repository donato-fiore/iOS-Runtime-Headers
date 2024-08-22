// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAINHERITANCEINVITATION_H
#define AAINHERITANCEINVITATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AAInheritanceInvitation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *beneficiaryDisplayName; // ivar: _beneficiaryDisplayName
@property (readonly, copy, nonatomic) NSString *beneficiaryFirstName; // ivar: _beneficiaryFirstName
@property (readonly, copy, nonatomic) NSString *beneficiaryHandle; // ivar: _beneficiaryHandle
@property (readonly, nonatomic) NSUUID *beneficiaryID; // ivar: _beneficiaryID
@property (readonly, copy, nonatomic) NSString *beneficiaryLastName; // ivar: _beneficiaryLastName
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBeneficiaryID:(id)arg0 beneficiaryHandle:(id)arg1 ;
-(id)initWithBeneficiaryID:(id)arg0 beneficiaryHandle:(id)arg1 beneficiaryFirstName:(id)arg2 beneficiaryLastName:(id)arg3 beneficiaryDisplayName:(id)arg4 status:(NSInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif