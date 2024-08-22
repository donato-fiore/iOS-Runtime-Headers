// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SAMETRICSSENDCOMPLETIONSPROXY_H
#define _SAMETRICSSENDCOMPLETIONSPROXY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _SAMetricsSendCompletionsProxy : NSObject {
    NSMutableArray *_blocks;
}




-(id)init;
-(void)addBlock:(id)arg0 ;
-(void)dealloc;
-(void)dispatchBlocksWithResult:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif