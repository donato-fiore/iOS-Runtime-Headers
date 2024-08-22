// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWFACEDETECTATTENTIONEVENT_H
#define AWFACEDETECTATTENTIONEVENT_H

@protocol NSSecureCoding;


#import "AWAttentionEvent.h"

@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding>



@property (readonly, nonatomic, getter=isMetadataValid) BOOL metadataValid; // ivar: _metadataValid
@property (readonly, nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) CGFloat pitch; // ivar: _pitch
@property (readonly, nonatomic) CGFloat roll; // ivar: _roll
@property (readonly, nonatomic) CGFloat yaw; // ivar: _yaw


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 tagIndex:(NSUInteger)arg1 faceMetadata:(struct AWFaceDetectMetadata *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validateMask;


@end


#endif