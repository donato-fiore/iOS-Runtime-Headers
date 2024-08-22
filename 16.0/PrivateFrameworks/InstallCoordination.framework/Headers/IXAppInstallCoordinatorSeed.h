// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXAPPINSTALLCOORDINATORSEED_H
#define IXAPPINSTALLCOORDINATORSEED_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "IXApplicationIdentity.h"

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger creator; // ivar: _creator
@property (nonatomic) unsigned int creatorEUID; // ivar: _creatorEUID
@property (retain, nonatomic) IXApplicationIdentity *identity; // ivar: _identity
@property (nonatomic) NSUInteger installationDomain; // ivar: _installationDomain
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (retain, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif