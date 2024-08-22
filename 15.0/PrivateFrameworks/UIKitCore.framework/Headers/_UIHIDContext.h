// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHIDCONTEXT_H
#define _UIHIDCONTEXT_H


#import <Foundation/Foundation.h>

#import "_UIHIDPathCollection.h"
#import "_UIHIDScaleEventTracker.h"

@interface _UIHIDContext : NSObject {
    _UIHIDPathCollection *pathCollection;
    _UIHIDScaleEventTracker *scaleEventTracker;
    NSUInteger state;
}






@end


#endif