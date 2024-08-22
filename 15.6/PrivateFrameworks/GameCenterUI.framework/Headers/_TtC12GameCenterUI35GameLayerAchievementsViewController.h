// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI35GAMELAYERACHIEVEMENTSVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI35GAMELAYERACHIEVEMENTSVIEWCONTROLLER_H

@class UICollectionViewController, NSArray;



@interface _TtC12GameCenterUI35GameLayerAchievementsViewController : UICollectionViewController {
    ? bootstrapPresenter;
    ? content;
    ? statePresenter;
    ? childPresenters;
    ? theme;
    ? style;
    ? scrollDirection;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif