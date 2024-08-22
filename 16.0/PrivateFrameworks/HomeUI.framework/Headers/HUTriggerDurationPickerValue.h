// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERDURATIONPICKERVALUE_H
#define HUTRIGGERDURATIONPICKERVALUE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HUTriggerDurationPickerValue : NSObject

@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasDuration;


+(id)valueWithDuration:(CGFloat)arg0 ;
+(id)valueWithNoDuration;
-(id)init;
-(id)initWithDuration:(id)arg0 ;


@end


#endif