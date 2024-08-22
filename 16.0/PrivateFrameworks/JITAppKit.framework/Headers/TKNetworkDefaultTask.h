// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKNETWORKDEFAULTTASK_H
#define TKNETWORKDEFAULTTASK_H

@class NSString;
@protocol TKNetworkTask;

#import <Foundation/Foundation.h>

#import "MCLURLDataLoaderTask.h"

@interface TKNetworkDefaultTask : NSObject <TKNetworkTask>

 {
    MCLURLDataLoaderTask *_task;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTask:(id)arg0 ;
-(void)cancel;


@end


#endif