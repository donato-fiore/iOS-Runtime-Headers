// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSBUTTONPRESSSTATE_H
#define SOSBUTTONPRESSSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOSButtonPressState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat lockPressedMCTTimestamp; // ivar: _lockPressedMCTTimestamp
@property (readonly, nonatomic) BOOL volumeDownPressed; // ivar: _volumeDownPressed
@property (readonly, nonatomic) CGFloat volumeDownPressedMCTTimestamp; // ivar: _volumeDownPressedMCTTimestamp
@property (readonly, nonatomic) BOOL volumeUpPressed; // ivar: _volumeUpPressed
@property (readonly, nonatomic) CGFloat volumeUpPressedMCTTimestamp; // ivar: _volumeUpPressedMCTTimestamp


+(BOOL)supportsSecureCoding;
-(CGFloat)getButtonPressGap;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVolumeUpPressed:(BOOL)arg0 Timestamp:(CGFloat)arg1 VolumeDownPressed:(BOOL)arg2 Timestamp:(CGFloat)arg3 LockPressedTimestamp:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif