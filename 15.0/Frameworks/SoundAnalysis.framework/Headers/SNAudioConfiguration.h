// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIOCONFIGURATION_H
#define SNAUDIOCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSString *mode; // ivar: _mode
@property (nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAudioConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif