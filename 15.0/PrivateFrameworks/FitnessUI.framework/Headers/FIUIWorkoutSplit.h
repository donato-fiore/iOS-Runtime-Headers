// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIWORKOUTSPLIT_H
#define FIUIWORKOUTSPLIT_H


#import <Foundation/Foundation.h>


@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) CGFloat distanceInMeters; // ivar: _distanceInMeters
@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistance:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif