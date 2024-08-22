// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSTOREDOWNLOADPROCESSASSETSOPERATION_H
#define ATSTOREDOWNLOADPROCESSASSETSOPERATION_H



#import "ATStoreDownloadOperation.h"
#import "ATStoreDownloadOperationResult.h"

@interface ATStoreDownloadProcessAssetsOperation : ATStoreDownloadOperation

@property (readonly, nonatomic) ATStoreDownloadOperationResult *assetsOperationResult; // ivar: _assetsOperationResult


-(id)initWithAsset:(id)arg0 assetsOperationResult:(id)arg1 ;
-(void)execute;


@end


#endif