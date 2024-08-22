// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGCURRENTPROCESSENUMERATOR_H
#define OSLOGCURRENTPROCESSENUMERATOR_H

@class NSXPCConnection;


#import "OSLogEnumerator.h"

@interface OSLogCurrentProcessEnumerator : OSLogEnumerator {
    NSXPCConnection *_connectionToService;
}




-(id)initWithOptions:(NSUInteger)arg0 predicate:(id)arg1 position:(id)arg2 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif