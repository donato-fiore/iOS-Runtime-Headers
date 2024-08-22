// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFREADERWEBPROCESSPLUGINPAGECONTROLLER_H
#define _SFREADERWEBPROCESSPLUGINPAGECONTROLLER_H

@class SFWebProcessPlugInPageController, WKWebProcessPlugInScriptWorld;


#import "_SFWebProcessPlugInReaderEnabledPageController.h"

@interface _SFReaderWebProcessPlugInPageController : SFWebProcessPlugInPageController {
    unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
}


@property (weak, nonatomic) _SFWebProcessPlugInReaderEnabledPageController *originalPageController; // ivar: _originalPageController


+(id)readerPageControllerForContextHandle:(id)arg0 ;
-(id)collectReaderContentFromPrintAndMailingFrame;
-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(id)isolatedWorldForNextPageDetection;
-(id)printingMailingFrame;
-(struct OpaqueJSValue *)originalArticleFinder;
-(void)_initializeReaderJSControllerForFrame:(id)arg0 ;
-(void)loadNewArticle;
-(void)reloadArticle;
-(void)setConfiguration:(id)arg0 ;
-(void)setReaderIsActive:(BOOL)arg0 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg0 ;


@end


#endif