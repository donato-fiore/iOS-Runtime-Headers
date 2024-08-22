// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCUSTODIANSETUPRESULT_H
#define AKCUSTODIANSETUPRESULT_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKCustodianSetupResult : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *encryptedPRKC; // ivar: _encryptedPRKC
@property (copy, nonatomic) NSString *ownerCustodianAltDSID; // ivar: _ownerCustodianAltDSID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif