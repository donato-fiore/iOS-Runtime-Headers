// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCTOUCHEVENT_H
#define TVRCTOUCHEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TVRCTouchEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGPoint digitizerLocation; // ivar: _digitizerLocation
@property (readonly, nonatomic) NSInteger finger; // ivar: _finger
@property (readonly, nonatomic) NSInteger phase; // ivar: _phase
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)_initWithTimestamp:(CGFloat)arg0 finger:(NSInteger)arg1 phase:(NSInteger)arg2 digitizerLocation:(struct CGPoint )arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif