// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPDYNAMICASSETPERSONALIZATION_H
#define UARPDYNAMICASSETPERSONALIZATION_H

@class NSMutableArray, NSURL;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UARPSuperBinaryAsset.h"
#import "UARPUploaderEndpoint.h"

@interface UARPDynamicAssetPersonalization : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_options;
    UARPSuperBinaryAsset *_im4mAsset;
}


@property (readonly) NSInteger assetNumber;
@property (readonly) UARPUploaderEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSURL *url; // ivar: _url


-(BOOL)prepareDynamicAsset:(id)arg0 error:(*id)arg1 ;
-(BOOL)processDynamicAsset:(*id)arg0 ;
-(BOOL)tssRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 url:(id)arg1 ;
-(id)tssRequestWithSigningServer:(id)arg0 useSSO:(BOOL)arg1 ;


@end


#endif