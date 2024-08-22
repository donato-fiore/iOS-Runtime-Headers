// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLSESSIONTASKGROUP_H
#define __NSCFURLSESSIONTASKGROUP_H

@class NSString;
@protocol __NSURLSessionTaskGroupForConfiguration;

#import <Foundation/Foundation.h>

#import "NSURLSessionConfiguration.h"
#import "NSURLSession.h"

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration>

 {
    NSURLSessionConfiguration *_groupConfiguration_ivar;
    NSURLSession *_groupSession_ivar;
}


@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)uploadTaskWithStreamedRequest:(id)arg0 ;
-(void)dealloc;


@end


#endif