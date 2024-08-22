// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATASESSIONWAITER_H
#define GEODATASESSIONWAITER_H

@class NSString;
@protocol GEOCancellable, GEODataSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "GEODataSession.h"
#import "GEODataSessionTask.h"

@interface GEODataSessionWaiter : NSObject <GEOCancellable, GEODataSessionTaskDelegate>

 {
    id *_strongReferenceToSelf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEODataSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataSessionTask *task; // ivar: _task


-(id)init;
-(id)initWithSession:(id)arg0 request:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancel;
-(void)dataSession:(id)arg0 didCompleteTask:(id)arg1 ;


@end


#endif