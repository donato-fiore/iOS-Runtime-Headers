// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACUSTODIANPASSWORDRESETINFORMATION_H
#define AACUSTODIANPASSWORDRESETINFORMATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AACustodianPasswordResetInformation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *custodianRecoveryToken; // ivar: _custodianRecoveryToken
@property (copy, nonatomic) NSString *ownerAppleID; // ivar: _ownerAppleID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecoveryToken:(id)arg0 ownerAppleID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif