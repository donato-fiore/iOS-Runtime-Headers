// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXANSWERCALLACTION_H
#define CXANSWERCALLACTION_H

@class NSDate;


#import "CXCallAction.h"

@interface CXAnswerCallAction : CXCallAction {
    CGSize _localPortraitAspectRatio;
    CGSize _localLandscapeAspectRatio;
}


@property (copy, nonatomic) NSDate *dateConnected; // ivar: _dateConnected
@property (nonatomic) BOOL downgradeToAudio; // ivar: _downgradeToAudio


+(BOOL)supportsSecureCoding;
+(CGFloat)timeout;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )localLandscapeAspectRatio;
-(struct CGSize )localPortraitAspectRatio;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithDateConnected:(id)arg0 ;
-(void)setLocalLandscapeAspectRatio:(struct CGSize )arg0 ;
-(void)setLocalPortraitAspectRatio:(struct CGSize )arg0 ;
-(void)updateAsFulfilledWithDateConnected:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif