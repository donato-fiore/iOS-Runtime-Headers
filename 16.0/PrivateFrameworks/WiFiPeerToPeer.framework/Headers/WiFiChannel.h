// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFICHANNEL_H
#define WIFICHANNEL_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiChannel : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger bandwidth; // ivar: _bandwidth
@property (readonly, nonatomic) unsigned int channelNumber; // ivar: _channelNumber
@property (readonly, nonatomic) BOOL extensionChannelAbove; // ivar: _extensionChannelAbove
@property (readonly, nonatomic) BOOL is2_4GHz; // ivar: _is2_4GHz
@property (readonly, nonatomic) BOOL is5GHz; // ivar: _is5GHz
@property (readonly, nonatomic) BOOL isDFS; // ivar: _isDFS


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChannelNumber:(unsigned int)arg0 bandwidth:(NSInteger)arg1 is2_4GHz:(BOOL)arg2 is5GHz:(BOOL)arg3 isDFS:(BOOL)arg4 extensionChannelAbove:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif