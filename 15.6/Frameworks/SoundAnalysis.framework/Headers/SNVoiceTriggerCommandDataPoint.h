// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNVOICETRIGGERCOMMANDDATAPOINT_H
#define SNVOICETRIGGERCOMMANDDATAPOINT_H


#import <Foundation/Foundation.h>


@interface SNVoiceTriggerCommandDataPoint : NSObject

@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(id)initWithConfidence:(CGFloat)arg0 timeRange:(struct ? )arg1 ;


@end


#endif