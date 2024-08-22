// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEENASSETSETTINGSVIEWCONTROLLER_H
#define PXSEENASSETSETTINGSVIEWCONTROLLER_H

@class UIViewController, NSString, PHFetchResult, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_recommendedVariationTypeForAsset:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_suggestedSeenFetchOptions;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fetchSeenAssetsAndReload:(BOOL)arg0 ;
-(void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg0 ;
-(void)_presentConfirmationForAssetAtIndexPath:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif