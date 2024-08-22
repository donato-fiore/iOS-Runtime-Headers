// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCHOOSEIMAGEVIEWCONTROLLER_H
#define WFCHOOSEIMAGEVIEWCONTROLLER_H

@class UITableViewController, NSMutableSet, WFContentCollection, NSString;
@protocol WFImageContentItemCellDelegate, WFChooseImageViewControllerDelegate;



@interface WFChooseImageViewController : UITableViewController <WFImageContentItemCellDelegate>

 {
    NSMutableSet *_selectedItems;
    CGRect _lastFrame;
}


@property (readonly, nonatomic) WFContentCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFChooseImageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger itemsPerRow; // ivar: _itemsPerRow
@property (nonatomic) NSUInteger maximumNumberOfItems; // ivar: _maximumNumberOfItems
@property (nonatomic) NSUInteger minimumNumberOfItems; // ivar: _minimumNumberOfItems
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCollection:(id)arg0 selectedIndexes:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancel;
-(void)cell:(id)arg0 didSelectImageViewAtIndex:(NSUInteger)arg1 ;
-(void)done;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif