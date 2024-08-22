// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERACLIPPOSTERFRAME_H
#define HMCAMERACLIPPOSTERFRAME_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraClipPosterFrame : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSUInteger byteOffset; // ivar: _byteOffset
@property (readonly) NSUInteger height; // ivar: _height
@property (readonly) NSUInteger sizeInBytes; // ivar: _sizeInBytes
@property (readonly) CGFloat timeOffset; // ivar: _timeOffset
@property (readonly) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeOffset:(CGFloat)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 byteOffset:(NSUInteger)arg3 sizeInBytes:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif