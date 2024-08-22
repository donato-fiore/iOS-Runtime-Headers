// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREATTRIBUTES_H
#define HKFEATUREATTRIBUTES_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKFeatureAttributes : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *UDIDeviceIdentifier; // ivar: _UDIDeviceIdentifier
@property (readonly, copy, nonatomic) NSString *featureVersion; // ivar: _featureVersion
@property (readonly, copy, nonatomic) NSString *updateVersion; // ivar: _updateVersion
@property (readonly, copy, nonatomic) NSString *yearOfRelease; // ivar: _yearOfRelease


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureVersion:(id)arg0 updateVersion:(id)arg1 UDIDeviceIdentifier:(id)arg2 yearOfRelease:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif