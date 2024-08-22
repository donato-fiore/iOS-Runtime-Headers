// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSTOREDOWNLOADASSETSOPERATION_H
#define ATSTOREDOWNLOADASSETSOPERATION_H



#import "ATStoreDownloadOperation.h"
#import "ATStoreDownloadOperationResult.h"

@interface ATStoreDownloadAssetsOperation : ATStoreDownloadOperation

@property (readonly, nonatomic) ATStoreDownloadOperationResult *prepareOperationResult; // ivar: _prepareOperationResult


-(id)initWithAsset:(id)arg0 prepareOperationResult:(id)arg1 ;
-(void)execute;


@end


#endif