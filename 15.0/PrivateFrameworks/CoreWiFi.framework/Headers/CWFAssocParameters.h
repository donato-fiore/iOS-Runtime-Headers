// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFASSOCPARAMETERS_H
#define CWFASSOCPARAMETERS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFEAPCredentials.h"
#import "CWFNetworkProfile.h"
#import "CWFScanResult.h"

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) CWFEAPCredentials *EAPCredentials; // ivar: _EAPCredentials
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile; // ivar: _knownNetworkProfile
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL rememberUponSuccessfulAssociation; // ivar: _rememberUponSuccessfulAssociation
@property (copy, nonatomic) CWFScanResult *scanResult; // ivar: _scanResult


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssocParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif