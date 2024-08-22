// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGENOTIFICATIONTIMER_H
#define IMMESSAGENOTIFICATIONTIMER_H

@class NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface IMMessageNotificationTimer : NSObject

@property (readonly, nonatomic) BOOL areDingsRemaining;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSNumber *numberDingsLeft; // ivar: _numberDingsLeft


-(id)initWithDate:(id)arg0 ;
-(void)dealloc;
-(void)reduceNumberDingsLeft;


@end


#endif