// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSSHKEYCONFIGURATIONVIEWCONTROLLER_H
#define WFSSHKEYCONFIGURATIONVIEWCONTROLLER_H

@class UITableViewController, WFItemBasedTableSection, WFBasicTableItem, WFTableDataSource, NSString, WFSSHKeyPair;
@protocol WFSSHKeyGenerationViewControllerDelegate, WFSSHKeyConfigurationViewControllerDelegate;



@interface WFSSHKeyConfigurationViewController : UITableViewController <WFSSHKeyGenerationViewControllerDelegate>



@property (readonly, nonatomic) WFItemBasedTableSection *actionsSection; // ivar: _actionsSection
@property (readonly, nonatomic) WFBasicTableItem *bitsItem; // ivar: _bitsItem
@property (readonly, nonatomic) WFBasicTableItem *commentItem; // ivar: _commentItem
@property (readonly, nonatomic) WFTableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSSHKeyConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFBasicTableItem *exportItem; // ivar: _exportItem
@property (readonly, nonatomic) WFBasicTableItem *generateItem; // ivar: _generateItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFItemBasedTableSection *keyInfoSection; // ivar: _keyInfoSection
@property (retain, nonatomic) WFSSHKeyPair *keyPair; // ivar: _keyPair
@property (readonly, nonatomic) WFBasicTableItem *md5HashItem; // ivar: _md5HashItem
@property (readonly, nonatomic) WFBasicTableItem *sha256HashItem; // ivar: _sha256HashItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFBasicTableItem *typeItem; // ivar: _typeItem


-(id)init;
-(id)localizedDisplayNameForType:(NSUInteger)arg0 ;
-(id)publicKey;
-(id)truncatedHash:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)keyGenerationViewController:(id)arg0 didFinishWithKeyPair:(id)arg1 ;
-(void)showHashWithType:(NSUInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateVisibleItems;
-(void)viewDidLoad;


@end


#endif