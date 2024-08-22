// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDARBITERDEBUGENTRY_H
#define _UIKEYBOARDARBITERDEBUGENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _UIKeyboardArbiterDebugEntry : NSObject {
    NSDate *_timestamp;
}


@property (readonly) int importance;


-(id)init;
-(void)enumerateContents:(id)arg0 ;


@end


#endif