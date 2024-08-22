// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCREMOTEVIEWCONTROLLER_H
#define DOCREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, DOCConfiguration;
@protocol DOCRemoteContextInterface, DOCRemoteViewControllerDelegate;


#import "DOCRemoteContext.h"
#import "DOCAppearance.h"

@interface DOCRemoteViewController : UIRemoteViewController <DOCRemoteContextInterface>



@property (retain) DOCConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<DOCRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain) DOCRemoteContext *hostContext; // ivar: _hostContext
@property BOOL isBrowserViewController; // ivar: _isBrowserViewController
@property (retain) DOCAppearance *lastAppearance; // ivar: _lastAppearance


+(id)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg0 configuration:(id)arg1 completionBlock:(id)arg2 ;
+(id)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg0 configuration:(id)arg1 completionBlock:(id)arg2 ;
// +(id)instantiateRemoteViewControllerWithConfiguration:(id)arg0 transparent:(BOOL)arg1 errorHandler:(id)arg2 hostProxy:(unk)arg3 completionHandler:(id)arg4  ;
+(id)serviceExtension;
-(void)updateAppearance:(id)arg0 completionBlock:(id)arg1 ;
-(void)updateAppearance:(id)arg0 shouldFlushCA:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)updateEditingTo:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif