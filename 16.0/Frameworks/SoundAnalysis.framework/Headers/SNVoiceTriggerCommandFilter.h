// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNVOICETRIGGERCOMMANDFILTER_H
#define SNVOICETRIGGERCOMMANDFILTER_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SNVoiceTriggerCommandFilter : NSObject {
    NSInteger _maxHistoryLength;
    CGFloat _confidenceThreshold;
    int _streak;
    NSString *_name;
    NSMutableArray *_history;
}






@end


#endif