// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTTHUMBNAILLOADINGREQUEST_H
#define PXIMPORTTHUMBNAILLOADINGREQUEST_H

@class PHImportAssetDataRequest;

#import <Foundation/Foundation.h>

#import "PXImportItemViewModel.h"

@interface PXImportThumbnailLoadingRequest : NSObject

@property (retain) PHImportAssetDataRequest *assetDataRequest; // ivar: _assetDataRequest
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, weak, nonatomic) PXImportItemViewModel *importItem; // ivar: _importItem
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) NSUInteger requestSize; // ivar: _requestSize


-(id)initWithImportItem:(id)arg0 requestID:(NSInteger)arg1 requestSize:(NSUInteger)arg2 completionBlock:(id)arg3 ;


@end


#endif