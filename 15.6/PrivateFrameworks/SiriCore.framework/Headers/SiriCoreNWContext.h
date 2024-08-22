// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORENWCONTEXT_H
#define SIRICORENWCONTEXT_H

@protocol OS_nw_context;

#import <Foundation/Foundation.h>


@interface SiriCoreNWContext : NSObject {
    NSObject<OS_nw_context> *_context;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(id)nwContext;


@end


#endif