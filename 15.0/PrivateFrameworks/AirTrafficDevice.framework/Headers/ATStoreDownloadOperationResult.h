// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSTOREDOWNLOADOPERATIONRESULT_H
#define ATSTOREDOWNLOADOPERATIONRESULT_H

@class NSDictionary, NSString, ICRequestContext, NSData, ICStoreMediaResponseItem;

#import <Foundation/Foundation.h>


@interface ATStoreDownloadOperationResult : NSObject

@property (copy, nonatomic) NSDictionary *assetClientParams; // ivar: _assetClientParams
@property (nonatomic) BOOL cancelAllRemaining; // ivar: _cancelAllRemaining
@property (copy, nonatomic) NSString *downloadFilePath; // ivar: _downloadFilePath
@property (nonatomic) BOOL isHLSDownload; // ivar: _isHLSDownload
@property (copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) NSData *resumeData; // ivar: _resumeData
@property (copy, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem; // ivar: _storeMediaResponseItem


-(id)description;


@end


#endif