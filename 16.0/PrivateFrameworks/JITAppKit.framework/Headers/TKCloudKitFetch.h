// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKCLOUDKITFETCH_H
#define TKCLOUDKITFETCH_H

@class NSURL, NSError, TMLJSONObject, NSMutableURLRequest;
@protocol TKNetworkTask;

#import <Foundation/Foundation.h>


@interface TKCloudKitFetch : NSObject {
    id<TKNetworkTask> *_queryTask;
    id<TKNetworkTask> *_downloadTask;
}


@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSURL *downloadURL; // ivar: _downloadURL
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) TMLJSONObject *response; // ivar: _response
@property (retain, nonatomic) NSMutableURLRequest *urlRequest; // ivar: _urlRequest


-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)downloadAssetFromCloudKit;
-(void)handleDownloadResponse:(id)arg0 error:(id)arg1 ;
-(void)handleResponse:(id)arg0 data:(id)arg1 responseError:(id)arg2 ;
-(void)send;
-(void)tmlDispose;


@end


#endif