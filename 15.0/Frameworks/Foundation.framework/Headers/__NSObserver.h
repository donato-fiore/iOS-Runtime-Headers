// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSOBSERVER_H
#define __NSOBSERVER_H


#import <Foundation/Foundation.h>

#import "NSNotificationCenter.h"
#import "NSOperationQueue.h"
#import "NSString.h"

@interface __NSObserver : NSObject {
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id *object;
    id *block;
}




-(id)name;
-(id)object;
-(void)_doit:(id)arg0 ;
-(void)dealloc;


@end


#endif