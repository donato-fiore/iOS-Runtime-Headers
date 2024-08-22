// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTAUDIOCODECINFO_H
#define CTAUDIOCODECINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger amrMode; // ivar: _amrMode
@property (nonatomic) NSUInteger callId; // ivar: _callId
@property (nonatomic) NSInteger codec; // ivar: _codec
@property (nonatomic) NSInteger evsBandwidth; // ivar: _evsBandwidth
@property (nonatomic) NSInteger evsBitrate; // ivar: _evsBitrate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCallId:(NSUInteger)arg0 codec:(NSInteger)arg1 amrMode:(NSUInteger)arg2 evsBandwidth:(NSInteger)arg3 evsBitrate:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif