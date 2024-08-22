// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASLISTTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASLISTTEMPLATEVIEWCONTROLLER_H

@class UITableView, UIImageView, NSArray, NSMapTable, NSIndexPath, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasViewElementViewController.h"

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UITableView *_tableView;
    BOOL _tableViewLeft;
    UIImageView *_vignetteView;
    BOOL _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController; // ivar: _relatedContentViewController
@property (readonly) Class superclass;


+(id)relatedContentViewControllerForElement:(id)arg0 ;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg0 ;
-(BOOL)showsPlaceholder;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)templateElement;
-(void)_addConstraintsToTableView:(id)arg0 ;
-(void)_configureBannerWithElement:(id)arg0 ;
-(void)_configureVignette:(BOOL)arg0 ;
-(void)_embedRelatedContentViewController;
-(void)_prepareLayout;
-(void)_pushRelatedViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setDetailContraints;
-(void)_setNavigationConstraints;
-(void)_setRelatedContentEmbedded:(BOOL)arg0 ;
-(void)_unembedRelatedContent;
-(void)_updateForTemplate:(id)arg0 ;
-(void)_updateRelatedContent:(id)arg0 forListItem:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif