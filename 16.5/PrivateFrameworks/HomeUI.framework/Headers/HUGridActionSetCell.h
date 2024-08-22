// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDACTIONSETCELL_H
#define HUGRIDACTIONSETCELL_H

@class HFItem, UIView, NSArray, NSString, NAFuture;
@protocol HUAccessoryViewCellProtocol;


#import "HUGridCell.h"
#import "HUIconView.h"
#import "HUPieProgressView.h"
#import "HUGridSceneCellLayoutOptions.h"
#import "HUGridActionSetTitleAndDescriptionView.h"

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol>

 {
    HFItem *_item;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) NSArray *actionSetCellConstraints; // ivar: _actionSetCellConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NAFuture *executeActionSetFuture; // ivar: _executeActionSetFuture
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) NAFuture *internalExecuteActionSetFuture; // ivar: _internalExecuteActionSetFuture
@property (retain, nonatomic) HUPieProgressView *progressView; // ivar: _progressView
@property (weak, nonatomic) HUGridSceneCellLayoutOptions *sceneCellLayoutOptions; // ivar: _sceneCellLayoutOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) HUGridActionSetTitleAndDescriptionView *titleAndDescriptionView; // ivar: _titleAndDescriptionView
@property (nonatomic) BOOL useDefaultCellBackgroundColor; // ivar: _useDefaultCellBackgroundColor


+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(void)_invalidateConstraints;
-(void)_setupActionSetCell;
-(void)_updateLabels;
-(void)_updateLabelsWithTitle:(id)arg0 description:(id)arg1 ;
-(void)layoutOptionsDidChange;
-(void)prepareForReuse;
-(void)setItem:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif