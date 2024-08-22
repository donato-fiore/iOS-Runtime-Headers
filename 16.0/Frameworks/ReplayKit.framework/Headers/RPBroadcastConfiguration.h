// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPBROADCASTCONFIGURATION_H
#define RPBROADCASTCONFIGURATION_H

@class NSDictionary;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding>



@property (nonatomic) CGFloat clipDuration; // ivar: _clipDuration
@property (retain, nonatomic) NSDictionary *videoCompressionProperties; // ivar: _videoCompressionProperties


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif