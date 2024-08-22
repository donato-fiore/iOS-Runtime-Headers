// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWATTENTIONLOSTEVENT_H
#define AWATTENTIONLOSTEVENT_H

@protocol NSSecureCoding;


#import "AWAttentionEvent.h"

@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding>



@property (readonly, nonatomic) id *associatedObject; // ivar: _associatedObject
@property (readonly, nonatomic) CGFloat attentionLostTimeout; // ivar: _attentionLostTimeout


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 tagIndex:(NSUInteger)arg1 attentionLostTimeout:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;
-(void)validateMask;


@end


#endif