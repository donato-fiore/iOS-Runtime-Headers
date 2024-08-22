// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFSHAREDWORKLOOP_H
#define CSLPRFSHAREDWORKLOOP_H


#import <Foundation/Foundation.h>


@interface CSLPRFSharedWorkloop : NSObject



+(id)serialQueueWithQOSClass:(unsigned int)arg0 label:(char *)arg1 ;
+(id)workloop;
+(void)dispatchWithQOSClass:(unsigned int)arg0 block:(id)arg1 ;


@end


#endif