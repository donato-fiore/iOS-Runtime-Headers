// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMUTABLETIMER_H
#define MTMUTABLETIMER_H

@class NSDate, NSDictionary, NSString;


#import "MTTimer.h"
#import "MTSound.h"

@interface MTMutableTimer : MTTimer

@property (copy, nonatomic) NSDate *dismissedDate;
@property (nonatomic) CGFloat duration;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) MTSound *sound;
@property (nonatomic) NSUInteger state;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif