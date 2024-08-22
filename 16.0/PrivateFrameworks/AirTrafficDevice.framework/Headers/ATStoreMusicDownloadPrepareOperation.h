// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSTOREMUSICDOWNLOADPREPAREOPERATION_H
#define ATSTOREMUSICDOWNLOADPREPAREOPERATION_H

@class ICMediaRedownloadRequest;


#import "ATStoreDownloadPrepareOperation.h"

@interface ATStoreMusicDownloadPrepareOperation : ATStoreDownloadPrepareOperation {
    ICMediaRedownloadRequest *_redownloadRequest;
}




-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif