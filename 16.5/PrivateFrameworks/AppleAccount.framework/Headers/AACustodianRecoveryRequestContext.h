// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AACUSTODIANRECOVERYREQUESTCONTEXT_H
#define AACUSTODIANRECOVERYREQUESTCONTEXT_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AACustodianRecoveryRequestContext : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL CLIMode; // ivar: _CLIMode
@property (copy, nonatomic) NSString *custodianRecoveryToken; // ivar: _custodianRecoveryToken
@property (copy, nonatomic) NSUUID *custodianUUID; // ivar: _custodianUUID
@property (nonatomic, getter=isDataOnlyRecovery) BOOL dataOnlyRecovery; // ivar: _dataOnlyRecovery
@property (copy, nonatomic) NSString *ownerAppleID; // ivar: _ownerAppleID
@property (copy, nonatomic) NSString *recoveryCode; // ivar: _recoveryCode
@property (copy, nonatomic) NSString *recoverySessionID; // ivar: _recoverySessionID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif