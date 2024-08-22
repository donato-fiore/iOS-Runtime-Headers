// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERINFOGRAPHICCELL_H
#define PUITRACKERINFOGRAPHICCELL_H

@class PSTableCell, UILabel, NSArray, UIStackView, UISegmentedControl, UIButton;
@protocol PUITrackerInfographicCellProtocol;



@interface PUITrackerInfographicCell : PSTableCell

@property (retain, nonatomic) UILabel *appOrTrackerSeectionHeader; // ivar: _appOrTrackerSeectionHeader
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (weak, nonatomic) NSObject<PUITrackerInfographicCellProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIStackView *mostUsedAppsStackView; // ivar: _mostUsedAppsStackView
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) UIButton *sortByButton; // ivar: _sortByButton
@property (nonatomic) NSUInteger sortMode; // ivar: _sortMode
@property (retain, nonatomic) UILabel *trackerContactsLabel; // ivar: _trackerContactsLabel
@property (retain, nonatomic) UILabel *usedAppsContactingTrackersLabel; // ivar: _usedAppsContactingTrackersLabel


-(id)appTileSectionWithAppID:(id)arg0 value:(id)arg1 ;
-(id)appTileView;
-(id)infographicTileViewWithTitle:(id)arg0 valueLabel:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)appViewWasTapped:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)sortButtonWasTapped;


@end


#endif