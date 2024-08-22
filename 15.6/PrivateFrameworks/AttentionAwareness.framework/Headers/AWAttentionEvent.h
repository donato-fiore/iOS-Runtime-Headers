// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWATTENTIONEVENT_H
#define AWATTENTIONEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AWAttentionEvent : NSObject <NSSecureCoding>

 {
    NSUInteger _tagIndex;
}


@property (readonly, nonatomic) NSUInteger eventMask; // ivar: _eventMask
@property (readonly, nonatomic) id *tag; // ivar: _tag
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 tagIndex:(NSUInteger)arg1 eventMask:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;
-(void)validateMask;


@end


#endif