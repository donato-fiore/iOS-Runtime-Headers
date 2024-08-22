// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDEVICEVERSION_H
#define PKDEVICEVERSION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKDeviceVersion.h"

@interface PKDeviceVersion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PKDeviceVersion *companion; // ivar: _companion
@property (readonly, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSString *generation; // ivar: _generation
@property (readonly, nonatomic) NSString *model; // ivar: _model


+(BOOL)supportsSecureCoding;
+(id)fromCurrentDeviceVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeviceVersion:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif