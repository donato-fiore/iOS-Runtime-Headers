// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASYNCHRONOUSPHOTOLIBRARYEXECUTIONCONTEXT_H
#define PLASYNCHRONOUSPHOTOLIBRARYEXECUTIONCONTEXT_H

@class NSString;
@protocol PLPhotoLibraryExecutionContext;

#import <Foundation/Foundation.h>


@interface PLAsynchronousPhotoLibraryExecutionContext : NSObject <PLPhotoLibraryExecutionContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(void)performTransactionOnLibrary:(id)arg0 transaction:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif