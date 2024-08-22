// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDOWNLOADPROGRESS_H
#define WKDOWNLOADPROGRESS_H

@class NSProgress;



@interface WKDownloadProgress : NSProgress {
    RetainPtr<NSURLSessionDownloadTask> m_task;
    WeakPtr<WebKit::Download, WTF::EmptyCounter> m_download;
    RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> m_sandboxExtension;
}




-(id)initWithDownloadTask:(id)arg0 download:(*void)arg1 URL:(id)arg2 sandboxExtension:(struct RefPtr<WebKit::SandboxExtension, WTF::RawPtrTraits<WebKit::SandboxExtension>, WTF::DefaultRefDerefTraits<WebKit::SandboxExtension>> )arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performCancel;
-(void)publish;
-(void)unpublish;


@end


#endif