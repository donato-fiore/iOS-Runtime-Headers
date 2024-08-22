// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUSTDIOLOGSINK_H
#define TSUSTDIOLOGSINK_H

@class NSDateFormatter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUStdioLogSink : NSObject {
    NSObject<OS_dispatch_queue> *_logQueue;
    NSDateFormatter *_dateFormatter;
}




+(id)sharedInstance;
-(id)init;
-(id)logSinkBlockWithFilePointer:(SEL)arg0 ;


@end


#endif