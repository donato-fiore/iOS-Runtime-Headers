// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFACETIMECELL_H
#define CNFACETIMECELL_H

@class CNUIUserActionListDataSource, NSString, UILabel;
@protocol CNActionViewDelegate, CNPropertyCellDelegate;


#import "CNLabeledCell.h"
#import "CNActionView.h"

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate>



@property (readonly, nonatomic) CNActionView *actionView1; // ivar: _actionView1
@property (readonly, nonatomic) CNActionView *actionView2; // ivar: _actionView2
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *faceTimeLabel; // ivar: _faceTimeLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFaceTimeAudioAvailable; // ivar: _isFaceTimeAudioAvailable
@property (readonly) Class superclass;


-(CGFloat)minCellHeight;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)rightMostView;
-(id)variableConstraints;
-(void)didPressActionView:(id)arg0 longPress:(BOOL)arg1 ;
-(void)performDefaultAction;
-(void)tintColorDidChange;
-(void)updateHorizontalTouchAreas;


@end


#endif