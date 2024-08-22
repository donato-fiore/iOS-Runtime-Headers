// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOTIER_H
#define AUDIOTIER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AudioTier : NSObject <NSCopying>



@property unsigned int bundling; // ivar: bundling
@property unsigned int codecBitrate; // ivar: codecBitrate
@property unsigned int codecPayload; // ivar: codecPayload
@property unsigned int duplication; // ivar: duplication
@property CGFloat duration; // ivar: duration
@property unsigned int mode; // ivar: mode
@property unsigned int tier; // ivar: tier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMode:(unsigned int)arg0 tier:(unsigned int)arg1 duplication:(unsigned int)arg2 bundling:(unsigned int)arg3 codecPayload:(unsigned int)arg4 codecBitrate:(unsigned int)arg5 ;


@end


#endif