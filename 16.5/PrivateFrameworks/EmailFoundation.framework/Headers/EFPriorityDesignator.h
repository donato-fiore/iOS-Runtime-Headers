// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFPRIORITYDESIGNATOR_H
#define EFPRIORITYDESIGNATOR_H


#import <Foundation/Foundation.h>


@interface EFPriorityDesignator : NSObject

@property (nonatomic) NSUInteger priority; // ivar: _priority


+(id)currentDesignator;
+(id)currentDesignatorIfExists;
+(id)currentDesignatorStack;
+(id)currentDesignatorStackIfExists;
+(id)installNewDesignator;
+(id)pushNewDesignator;
+(void)destroyCurrentDesignator;


@end


#endif