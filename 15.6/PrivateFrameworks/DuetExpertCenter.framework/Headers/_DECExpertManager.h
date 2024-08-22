// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECEXPERTMANAGER_H
#define _DECEXPERTMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _DECExpertManager : NSObject {
    NSArray *_experts;
}




+(id)sharedInstance;
-(id)_createExperts;
-(id)init;


@end


#endif