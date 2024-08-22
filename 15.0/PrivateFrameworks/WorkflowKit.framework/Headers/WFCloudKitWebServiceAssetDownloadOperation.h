// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDKITWEBSERVICEASSETDOWNLOADOPERATION_H
#define WFCLOUDKITWEBSERVICEASSETDOWNLOADOPERATION_H

@class NSURL, NSString;
@protocol WFCloudKitItem;


#import "WFCloudKitAsyncOperation.h"

@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation

@property (retain, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (weak, nonatomic) NSObject<WFCloudKitItem> *item; // ivar: _item
@property (retain, nonatomic) NSString *key; // ivar: _key


-(id)initWithAssetURL:(id)arg0 item:(id)arg1 key:(id)arg2 ;
-(void)start;


@end


#endif