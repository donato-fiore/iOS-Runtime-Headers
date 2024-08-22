// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTOREBOOKDOWNLOADASSETSOPERATION_H
#define ATSTOREBOOKDOWNLOADASSETSOPERATION_H

@class NSString;
@protocol BLDownloadQueueNonUIObserving;


#import "ATStoreDownloadAssetsOperation.h"

@interface ATStoreBookDownloadAssetsOperation : ATStoreDownloadAssetsOperation <BLDownloadQueueNonUIObserving>

 {
    NSString *_bookDownloadID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancel;
-(void)dealloc;
-(void)downloadQueue:(id)arg0 downloadStates:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)downloadQueue:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif