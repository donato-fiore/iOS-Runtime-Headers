// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSLARGEMESSAGESTORAGE_H
#define SIRIANALYTICSLARGEMESSAGESTORAGE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsLargeMessageStorage : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_applicationIdentifier;
}




-(id)initWithApplicationIdentifier:(id)arg0 ;
-(void)enqueueLargeMessageObjectFromPath:(id)arg0 messageWrapper:(id)arg1 completion:(id)arg2 ;


@end


#endif