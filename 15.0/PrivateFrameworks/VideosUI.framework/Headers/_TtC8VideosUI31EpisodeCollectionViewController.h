// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI31EPISODECOLLECTIONVIEWCONTROLLER_H
#define _TTC8VIDEOSUI31EPISODECOLLECTIONVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI31EpisodeCollectionViewController : TtC8VideosUI17VUIViewController {
    ? viewImpressioner;
    ? viewModel;
    ? dataSource;
    ? currentSnapshot;
    ? cachedPrototypeCell;
    ? cachedPrototypeCellMetrics;
    ? cachedPrototypeLastWidth;
    ? contextMenuInteractor;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_loadView;
-(void)vui_viewDidLayoutSubviews;


@end


#endif