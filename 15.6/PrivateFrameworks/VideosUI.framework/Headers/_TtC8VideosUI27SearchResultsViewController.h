// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI27SEARCHRESULTSVIEWCONTROLLER_H
#define _TTC8VIDEOSUI27SEARCHRESULTSVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI27SearchResultsViewController : TtC8VideosUI17VUIViewController {
    ? collectionImpressioner;
    ? delegate;
    ? document;
    ? stackViewController;
    ? recentlySearchedTemplateViewModel;
    ? hintsTemplateViewModel;
    ? hintsCollectionViewModel;
    ? topResultsCollectionViewModel;
    ? resultCategoryIds;
    ? loadingView;
    ? isShowingLoader;
    ? $__lazy_storage_$_noContentView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_willMoveToParentViewController:(id)arg0 ;


@end


#endif