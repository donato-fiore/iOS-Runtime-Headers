// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSKEYVALUEDIDWILLSTATS_H
#define _NSKEYVALUEDIDWILLSTATS_H


#import <Foundation/Foundation.h>

#import "NSThread.h"

@interface _NSKeyValueDidWillStats : NSObject {
    NSInteger _count;
    BOOL _hasDecreased;
    ? _detectedIssues;
    NSThread *_originalThread;
}




-(void)_recordThread;
-(void)dealloc;


@end


#endif