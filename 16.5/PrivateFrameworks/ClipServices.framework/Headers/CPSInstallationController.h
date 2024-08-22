// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSINSTALLATIONCONTROLLER_H
#define CPSINSTALLATIONCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol ASDClipSessionDelegate, CPSAppInfoFetching, OS_dispatch_queue, CPSInstallationControllerDelegate;

#import <Foundation/Foundation.h>


@interface CPSInstallationController : NSObject <ASDClipSessionDelegate>

 {
    id<CPSAppInfoFetching> *_appInfoFetcher;
    NSMutableDictionary *_sessionsByBundleID;
    NSMutableDictionary *_installPromisesBySessionID;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSInstallationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)stopStallingCurrentInstallation;
-(id)_asdClipRequestWithSession:(id)arg0 ;
-(id)_bundleIDFromSession:(id)arg0 ;
-(id)_placeholderArtworkForSession:(id)arg0 ;
-(id)initWithAppInfoFetcher:(id)arg0 ;
-(void)_cancelClipSessionWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)_continueInstallForBundleID:(id)arg0 session:(id)arg1 completion:(id)arg2 ;
-(void)_doneWithSession:(id)arg0 error:(id)arg1 ;
-(void)_getClipSessionForBundleID:(id)arg0 sourceBundleID:(id)arg1 forInstall:(BOOL)arg2 completion:(id)arg3 ;
-(void)_informDelegateDidInstallPlaceholder:(id)arg0 ;
-(void)_prewarmDemoIPAWithBundleID:(id)arg0 session:(id)arg1 completion:(id)arg2 ;
-(void)cancelPrewarmForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)clipSession:(id)arg0 didFailWithError:(id)arg1 ;
-(void)clipSession:(id)arg0 didUpdateProgress:(CGFloat)arg1 ;
-(void)clipSessionDidCompleteSuccessfully:(id)arg0 ;
-(void)clipSessionDidInstallPlaceholder:(id)arg0 ;
-(void)installClipWithBundleID:(id)arg0 session:(id)arg1 completion:(id)arg2 ;
-(void)prewarmClipWithBundleID:(id)arg0 session:(id)arg1 completion:(id)arg2 ;


@end


#endif