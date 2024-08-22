// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKTRANSITCONNECTIONCELL_H
#define _MKTRANSITCONNECTIONCELL_H

@class UIButton, NSLayoutConstraint;
@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"
#import "MKTransitInfoLabelView.h"

@interface _MKTransitConnectionCell : MKCustomSeparatorCell {
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
}


@property (retain, nonatomic) NSObject<GEOTransitConnectionInfo> *connectionInfo; // ivar: _connectionInfo
@property (weak, nonatomic) NSObject<_MKTransitConnectionCellDelegate> *delegate; // ivar: _delegate


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_buttonSelected;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)dealloc;


@end


#endif