// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNSUSPENSIONCONTROLLER_H
#define BNSUSPENSIONCONTROLLER_H

@class NSMutableSet, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface BNSuspensionController : NSObject {
    NSMutableSet *_suspensionReasons;
}


@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


+(void)initialize;


@end


#endif