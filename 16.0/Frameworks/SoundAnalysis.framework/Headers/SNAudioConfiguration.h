// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNAUDIOCONFIGURATION_H
#define SNAUDIOCONFIGURATION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *category; // ivar: _category
@property (copy, nonatomic) NSArray *channelMap; // ivar: _channelMap
@property (copy, nonatomic) NSString *mode; // ivar: _mode
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL useSiriAudioRouting; // ivar: _useSiriAudioRouting


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif