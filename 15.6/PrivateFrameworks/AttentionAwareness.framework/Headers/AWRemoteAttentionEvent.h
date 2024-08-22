// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWREMOTEATTENTIONEVENT_H
#define AWREMOTEATTENTIONEVENT_H

@protocol NSSecureCoding;


#import "AWAttentionEvent.h"

@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger usage; // ivar: _usage
@property (readonly, nonatomic) NSInteger usagePage; // ivar: _usagePage


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 tagIndex:(NSUInteger)arg1 remoteMetadata:(struct AWRemoteMetadata *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validateMask;


@end


#endif