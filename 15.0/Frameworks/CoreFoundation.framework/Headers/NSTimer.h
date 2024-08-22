// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTIMER_H
#define NSTIMER_H


#import <Foundation/Foundation.h>

#import "NSDate.h"

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) CGFloat timeInterval;
@property CGFloat tolerance;
@property (readonly, retain) id *userInfo;
@property (readonly, getter=isValid) BOOL valid;




@end


#endif