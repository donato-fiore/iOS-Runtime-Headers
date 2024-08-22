// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRSORIGININFORMATION_H
#define HDHRSORIGININFORMATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSOriginInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *operatingSystemBuild; // ivar: _operatingSystemBuild
@property (readonly, nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatingSystemVersion:(struct ? )arg0 build:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif