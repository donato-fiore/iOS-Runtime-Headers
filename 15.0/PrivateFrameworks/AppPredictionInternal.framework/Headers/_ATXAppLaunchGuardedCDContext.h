// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXAPPLAUNCHGUARDEDCDCONTEXT_H
#define _ATXAPPLAUNCHGUARDEDCDCONTEXT_H

@class NSMutableSet;
@protocol _CDLocalContext;

#import <Foundation/Foundation.h>


@interface _ATXAppLaunchGuardedCDContext : NSObject {
    id<_CDLocalContext> *_context;
    NSMutableSet *_registrations;
}






@end


#endif