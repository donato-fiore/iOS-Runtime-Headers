// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSSHKEYGENERATIONVIEWCONTROLLER_H
#define WFSSHKEYGENERATIONVIEWCONTROLLER_H

@class UITableViewController, WFTextFieldTableItem, WFItemBasedTableSection, NSNumber, WFTableDataSource, WFSegmentedControlTableItem;
@protocol WFSSHKeyGenerationViewControllerDelegate;



@interface WFSSHKeyGenerationViewController : UITableViewController

@property (readonly, nonatomic) WFTextFieldTableItem *commentItem; // ivar: _commentItem
@property (readonly, nonatomic) WFItemBasedTableSection *commentSection; // ivar: _commentSection
@property (nonatomic) Class currentFormat; // ivar: _currentFormat
@property (retain, nonatomic) NSNumber *currentKeySize; // ivar: _currentKeySize
@property (readonly, nonatomic) WFTableDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<WFSSHKeyGenerationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) WFSegmentedControlTableItem *keySizeItem; // ivar: _keySizeItem
@property (readonly, nonatomic) WFItemBasedTableSection *keySizeSection; // ivar: _keySizeSection
@property (readonly, nonatomic) WFSegmentedControlTableItem *keyTypeItem; // ivar: _keyTypeItem
@property (readonly, nonatomic) WFItemBasedTableSection *keyTypeSection; // ivar: _keyTypeSection


-(id)init;
-(void)authenticationTypeDidChange:(id)arg0 ;
-(void)cancelPressed:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)generateKeyPairAndFinish;
-(void)keySizeDidChange:(id)arg0 ;
-(void)updateVisibleItems;
-(void)viewDidLoad;


@end


#endif