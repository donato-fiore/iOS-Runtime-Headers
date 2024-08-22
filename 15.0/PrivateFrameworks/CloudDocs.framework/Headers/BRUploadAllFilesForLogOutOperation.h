// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRUPLOADALLFILESFORLOGOUTOPERATION_H
#define BRUPLOADALLFILESFORLOGOUTOPERATION_H

@class NSMutableDictionary, NSMutableArray, NSOperationQueue, NSString;
@protocol NSProgressReporting;


#import "BROperation.h"
#import "BRGlobalProgressProxy.h"

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>

 {
    NSMutableDictionary *_errorsByContainerID;
    NSMutableArray *_hiddenContainersWithError;
    NSOperationQueue *_opQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) BRGlobalProgressProxy *progress; // ivar: _progress
@property BOOL shouldKeepDataLocal; // ivar: _shouldKeepDataLocal
@property (readonly) Class superclass;
@property (copy) id *uploadAllFilesCompletionBlock; // ivar: _uploadAllFilesCompletionBlock


-(id)init;
-(void)cancel;
-(void)evictAllFilesInGroup:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif