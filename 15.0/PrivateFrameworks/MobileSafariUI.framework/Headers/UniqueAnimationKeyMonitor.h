// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNIQUEANIMATIONKEYMONITOR_H
#define UNIQUEANIMATIONKEYMONITOR_H


#import <Foundation/Foundation.h>

#import "UniqueAnimationKeyCounter.h"

@interface UniqueAnimationKeyMonitor : NSObject {
    UniqueAnimationKeyCounter *_counter;
}




-(id)initWithUniqueAnimationCounter:(id)arg0 ;
-(void)dealloc;


@end


#endif