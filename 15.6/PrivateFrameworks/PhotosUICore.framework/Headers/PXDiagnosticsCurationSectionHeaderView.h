// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDIAGNOSTICSCURATIONSECTIONHEADERVIEW_H
#define PXDIAGNOSTICSCURATIONSECTIONHEADERVIEW_H

@class UICollectionViewCell, UILabel, NSString, NSDictionary;


#import "PXStateBadgeView.h"

@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_agentAndStageLabel;
    UILabel *_reasonLabel;
}


@property (retain, nonatomic) NSString *agentAndStage; // ivar: _agentAndStage
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSDictionary *sectionInfo; // ivar: _sectionInfo
@property (retain, nonatomic) NSString *state; // ivar: _state


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif