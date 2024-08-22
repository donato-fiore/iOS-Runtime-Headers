// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI27MULTIDOCUMENTVIEWCONTROLLER_H
#define _TTC8VIDEOSUI27MULTIDOCUMENTVIEWCONTROLLER_H

@class TtC8VideosUI22DocumentViewController;



@interface _TtC8VideosUI27MultiDocumentViewController : TtC8VideosUI22DocumentViewController {
    ? parentDocumentDataSource;
    ? parentTitleContextDataKey;
    ? segmentsContextDataKey;
    ? segmentsContextDataTitleKey;
    ? segmentsContextDataIdentifierKey;
    ? placeholderInteractor;
    ? placeholderDocument;
    ? segments;
    ? parentTitle;
    ? documentInteractors;
    ? interactorObservers;
    ? selectedDocumentIndex;
    ? templateViewControllers;
    ? $__lazy_storage_$_spinnerView;
    ? $__lazy_storage_$_pinningHeaderView;
    ? $__lazy_storage_$_statusBarView;
    ? allowsDocumentSelection;
    ? largeTitleAccessoryView;
}




-(id)initWithCoder:(id)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif