// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECFEEDBACKPROVIDER_H
#define _DECFEEDBACKPROVIDER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DECFeedbackProvider : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
+(void)setCategory:(NSUInteger)arg0 ;
+(void)userAbandoned:(id)arg0 result:(id)arg1 metadata:(id)arg2 ;
+(void)userEngaged:(id)arg0 result:(id)arg1 metadata:(id)arg2 ;
-(id)init;


@end


#endif