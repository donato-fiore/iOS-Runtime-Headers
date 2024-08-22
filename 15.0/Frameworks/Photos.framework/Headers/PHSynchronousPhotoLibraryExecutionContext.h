// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHSYNCHRONOUSPHOTOLIBRARYEXECUTIONCONTEXT_H
#define PHSYNCHRONOUSPHOTOLIBRARYEXECUTIONCONTEXT_H

@class NSString;
@protocol PHPhotoLibraryExecutionContext;

#import <Foundation/Foundation.h>


@interface PHSynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)synchronousExecutionContext;
// -(void)callTransactionCompletionHandler:(id)arg0 withSuccess:(unk)arg1 error:(BOOL)arg2  ;
-(void)dispatchOnQueue:(id)arg0 block:(id)arg1 ;
-(void)sendChangesRequest:(id)arg0 onClient:(id)arg1 reply:(id)arg2 ;


@end


#endif