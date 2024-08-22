// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTOREMUSICDOWNLOADPROCESSASSETSOPERATION_H
#define ATSTOREMUSICDOWNLOADPROCESSASSETSOPERATION_H

@class ICSongDownloadDoneRequest;


#import "ATStoreDownloadProcessAssetsOperation.h"

@interface ATStoreMusicDownloadProcessAssetsOperation : ATStoreDownloadProcessAssetsOperation {
    ICSongDownloadDoneRequest *_downloadDoneRequest;
}




-(void)_removeDRMFromDownloadedAssetWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif