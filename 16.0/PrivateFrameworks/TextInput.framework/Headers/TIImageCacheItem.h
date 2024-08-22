// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIIMAGECACHEITEM_H
#define TIIMAGECACHEITEM_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIImageCacheItem : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) id *dataReleaseHandler; // ivar: _dataReleaseHandler
@property (nonatomic) unsigned char format; // ivar: _format
@property (nonatomic) *CGColor formatColor; // ivar: _formatColor
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
+(id)cacheItemWithSize:(struct CGSize )arg0 format:(unsigned char)arg1 formatColor:(struct CGColor *)arg2 scale:(CGFloat)arg3 data:(id)arg4 ;
+(id)cacheItemWithSize:(struct CGSize )arg0 format:(unsigned char)arg1 formatColor:(struct CGColor *)arg2 scale:(CGFloat)arg3 data:(id)arg4 dataReleaseHandler:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_callDataReleaseHandler;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif