// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFACETIMECELL_H
#define CNFACETIMECELL_H

@class CNUIUserActionListDataSource, CNContact, UIContextMenuInteraction, NSString, NSDictionary, UILabel, NSArray;
@protocol CNActionViewDelegate, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNCustomPresentation, CNPropertyCellDelegate, CNSchedulerProvider;


#import "CNLabeledCell.h"
#import "CNActionMenuHelper.h"
#import "CNActionView.h"
#import "CNContactActionsController.h"

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate, CNUIUserActionListConsumer, CNContactActionsControllerDelegate>



@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // ivar: _actionMenuHelper
@property (readonly, nonatomic) CNActionView *actionView1; // ivar: _actionView1
@property (readonly, nonatomic) CNActionView *actionView2; // ivar: _actionView2
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) NSObject<CNCustomPresentation> *actionsControllerPresentation; // ivar: _actionsControllerPresentation
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultActionPerType; // ivar: _defaultActionPerType
@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *faceTimeLabel; // ivar: _faceTimeLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFaceTimeAudioAvailable; // ivar: _isFaceTimeAudioAvailable
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedActionTypes; // ivar: _supportedActionTypes
@property (readonly, nonatomic) CGFloat throttleDelay; // ivar: _throttleDelay
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)actionViewShouldPresentDisambiguationUI:(id)arg0 ;
-(CGFloat)minCellHeight;
-(id)actionViewForType:(id)arg0 ;
-(id)allModelsObservable;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)rightMostView;
-(id)variableConstraints;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)didPressActionView:(id)arg0 longPress:(BOOL)arg1 ;
-(void)didSelectActionType:(id)arg0 withSourceView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)discoverAvailableActionTypes;
-(void)loadCachedActions;
-(void)performAction:(id)arg0 ;
-(void)performDefaultAction;
-(void)processModels:(id)arg0 ;
-(void)reset;
-(void)tintColorDidChange;
-(void)updateHorizontalTouchAreas;


@end


#endif