// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IXAPPINSTALLCOORDINATORSEED_H
#define IXAPPINSTALLCOORDINATORSEED_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSUInteger creator; // ivar: _creator
@property (nonatomic) unsigned int creatorEUID; // ivar: _creatorEUID
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (retain, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif