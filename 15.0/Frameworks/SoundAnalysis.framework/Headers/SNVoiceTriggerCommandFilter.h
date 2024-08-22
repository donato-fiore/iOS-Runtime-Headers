// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNVOICETRIGGERCOMMANDFILTER_H
#define SNVOICETRIGGERCOMMANDFILTER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface SNVoiceTriggerCommandFilter : NSObject {
    NSInteger _maxHistoryLength;
    CGFloat _confidenceThreshold;
    int _streak;
}


@property (readonly, nonatomic) NSMutableArray *history; // ivar: _history
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithCommand:(id)arg0 ;
-(id)processNewTimestep:(CGFloat)arg0 timeRange:(struct ? )arg1 ;


@end


#endif