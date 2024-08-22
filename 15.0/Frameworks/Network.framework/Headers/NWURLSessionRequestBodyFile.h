// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWURLSESSIONREQUESTBODYFILE_H
#define NWURLSESSIONREQUESTBODYFILE_H

@class NSString;
@protocol NWURLSessionRequestBodyProvider, OS_dispatch_io, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWURLSessionRequestBodyFile : NSObject <NWURLSessionRequestBodyProvider>

 {
    int _error;
    NSObject<OS_dispatch_io> *_io;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)readMinimumLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif