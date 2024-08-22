// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUETEVENTTRANSITION_H
#define PLDUETEVENTTRANSITION_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PLDuetEventTransition : NSObject

@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSDate *date; // ivar: _date
@property BOOL isStart; // ivar: _isStart


-(id)description;


@end


#endif