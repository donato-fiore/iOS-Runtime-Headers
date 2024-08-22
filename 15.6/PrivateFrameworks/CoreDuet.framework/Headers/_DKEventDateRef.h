// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKEVENTDATEREF_H
#define _DKEVENTDATEREF_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "_DKEvent.h"

@interface _DKEventDateRef : NSObject {
    NSDate *_date;
    NSUInteger _type;
    _DKEvent *_event;
}






@end


#endif