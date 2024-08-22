// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYEVENTLOGGING_H
#define PFUBIQUITYEVENTLOGGING_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PFUbiquityEventLogging : NSObject {
    NSMutableSet *_logEvents;
    NSInteger _logLevel;
}




+(void)initialize;
-(id)init;
-(void)dealloc;


@end


#endif