// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALDOCUMENTDOWNLOADER_H
#define HKCLINICALDOCUMENTDOWNLOADER_H

@class HKProxyProvider, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKClinicalDocumentDownloader : NSObject <_HKXPCExportable>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)beginOrResumeDownloadingAttachments:(id)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)downloadAttachment:(id)arg0 completion:(id)arg1 ;
-(void)pingDownloaderWithCompletion:(id)arg0 ;
-(void)triggerDownloadForAttachment:(id)arg0 completion:(id)arg1 ;


@end


#endif