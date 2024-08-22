// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXFEATURELISTVIEWCONTROLLER_H
#define PRXFEATURELISTVIEWCONTROLLER_H

@class NSString, UIImage, NSArray, NSMutableArray, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "PRXCardContentViewController.h"

@interface PRXFeatureListViewController : PRXCardContentViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *featureImage; // ivar: _featureImage
@property (readonly, nonatomic) NSArray *features;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *mutableFeatures; // ivar: _mutableFeatures
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)addFeature:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateHeaderView;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;


@end


#endif