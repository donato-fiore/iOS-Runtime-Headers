// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICATEGORYTABLEVIEWCONTROLLER_H
#define SKUICATEGORYTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSURL, NSArray;
@protocol SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate;


#import "SKUICategoryArtworkLoader.h"
#import "SKUICategory.h"
#import "SKUIClientContext.h"

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate>

 {
    BOOL _childrenHaveArtwork;
}


@property (retain, nonatomic) SKUICategoryArtworkLoader *artworkLoader; // ivar: _artworkLoader
@property (retain, nonatomic) SKUICategory *category; // ivar: _category
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *defaultURL; // ivar: _defaultURL
@property (weak, nonatomic) NSObject<SKUICategoryTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *metricsLocations; // ivar: _metricsLocations
@property (nonatomic) NSInteger numberOfHiddenRows; // ivar: _numberOfHiddenRows
@property (nonatomic, getter=isRoot) BOOL root; // ivar: _isRoot
@property (retain, nonatomic) NSURL *selectedURL; // ivar: _selectedURL
@property (readonly) Class superclass;


-(NSInteger)_metricsLocationPostionForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_categoryAtIndexPath:(id)arg0 ;
-(id)_metricsLocationsToPushIndexPath:(id)arg0 ;
-(id)metricsPageContextForCategoryTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneButtonAction:(id)arg0 ;
-(void)_recordClickEventForIndexPath:(id)arg0 category:(id)arg1 actionType:(id)arg2 ;
-(void)categoryArtworkLoader:(id)arg0 didLoadImage:(id)arg1 forCategory:(id)arg2 ;
-(void)categoryTableView:(id)arg0 didSelectCategory:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif