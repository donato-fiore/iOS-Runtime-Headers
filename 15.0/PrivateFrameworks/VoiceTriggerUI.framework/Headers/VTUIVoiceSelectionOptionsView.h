// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIVOICESELECTIONOPTIONSVIEW_H
#define VTUIVOICESELECTIONOPTIONSVIEW_H

@class UIView, UITableView, SUICVoiceSelectionViewModel, UITableViewDiffableDataSource, NSString;
@protocol UICollectionViewDelegate, UITableViewDelegate, UITableViewDelegatePrivate, SUICVoiceSelectionDisplaying, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding;



@interface VTUIVoiceSelectionOptionsView : UIView <UICollectionViewDelegate, UITableViewDelegate, UITableViewDelegatePrivate, SUICVoiceSelectionDisplaying>

 {
    UITableView *_voicesTableView;
    SUICVoiceSelectionViewModel *_viewModel;
    UITableViewDiffableDataSource *_tableViewDataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SUICVoiceSelectionEventHandling> *voiceSelectionEventHandler; // ivar: _voiceSelectionEventHandler
@property (weak, nonatomic) NSObject<SUICVoiceSelectionViewModelProviding> *voiceSelectionViewModelProvider; // ivar: _voiceSelectionViewModelProvider


-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(id)_diffableTableDataSource;
-(id)_tableCellForVoiceViewModel:(id)arg0 indexPath:(id)arg1 ;
-(id)init;
-(struct CGSize )_cellSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createAndApplySnapshotForViewModel:(id)arg0 ;
-(void)_setupVoicesTableView;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)voiceSelectionViewModelDidChange;


@end


#endif