// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRESOURCEVERSION_H
#define VNRESOURCEVERSION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNResourceVersion : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int major; // ivar: _major
@property (readonly, nonatomic) unsigned int micro; // ivar: _micro
@property (readonly, nonatomic) unsigned int minor; // ivar: _minor
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)invalidVersion;
+(id)versionForStringRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResourceVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajor:(unsigned int)arg0 ;
-(id)initWithMajor:(unsigned int)arg0 minor:(unsigned int)arg1 ;
-(id)initWithMajor:(unsigned int)arg0 minor:(unsigned int)arg1 micro:(unsigned int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif