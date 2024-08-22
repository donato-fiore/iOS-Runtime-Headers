// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI29DOCUMENTREQUESTVIEWCONTROLLER_H
#define _TTC8VIDEOSUI29DOCUMENTREQUESTVIEWCONTROLLER_H

@class TtC8VideosUI22DocumentViewController;



@interface _TtC8VideosUI29DocumentRequestViewController : TtC8VideosUI22DocumentViewController {
    ? staticPPTDocumentFolderPath;
    ? viewControllerDocumentIdentifier;
    ? initialControllerRef;
    ? initialRequestSent;
    ? inAppBannerAllowed;
    ? documentOptions;
    ? documentInteractor;
    ? documentInteractorObserver;
    ? requestContext;
    ? shouldHideLoadingView;
}




-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif