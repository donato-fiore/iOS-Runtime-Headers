// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERACLIPVIDEODATASEGMENT_H
#define HMCAMERACLIPVIDEODATASEGMENT_H



#import "HMCameraClipVideoSegment.h"

@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment

@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) CGFloat timeOffset; // ivar: _timeOffset


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithByteLength:(NSUInteger)arg0 byteOffset:(NSUInteger)arg1 duration:(CGFloat)arg2 timeOffset:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif