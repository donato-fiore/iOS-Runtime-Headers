// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDEVICEVERSIONRANGE_H
#define PKDEVICEVERSIONRANGE_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKDeviceVersionRange.h"

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PKDeviceVersionRange *companion; // ivar: _companion
@property (readonly, nonatomic) NSString *maximum; // ivar: _maximum
@property (readonly, nonatomic) NSString *minimum; // ivar: _minimum
@property (readonly, nonatomic) NSArray *models; // ivar: _models


+(BOOL)supportsSecureCoding;
-(BOOL)_matchesDeviceVersion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeviceVersionRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif