// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEDIATYPEINFOMANAGER_H
#define PXMEDIATYPEINFOMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXMediaTypeInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_pendingCompletionHandlers;
}




+(id)knowledgeBaseFallbackURL;
+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)_handleAssetDownloadProgressWithAsset:(id)arg0 error:(id)arg1 ;
-(void)_handleAssetQueryCallbackWithAsset:(id)arg0 error:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)_handleInstallMobileAssetCallbackWithAsset:(id)arg0 UTI:(id)arg1 codecName:(id)arg2 completionHandler:(id)arg3 ;
-(void)_installMobileAssetAsUserInitiated:(BOOL)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_prepareInformationForLookups;
-(void)_processPendingCallbacksWithAsset:(id)arg0 ;
-(void)mediaTypeInfoURLForUTI:(id)arg0 codecName:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)prepareInformationForLookups;


@end


#endif