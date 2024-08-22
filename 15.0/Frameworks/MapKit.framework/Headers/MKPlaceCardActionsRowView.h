// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECARDACTIONSROWVIEW_H
#define MKPLACECARDACTIONSROWVIEW_H

@class UIView, NSArray;
@protocol MKActionRowItemViewDelegate, MKPlaceActionManagerProtocol, _MKPlaceViewControllerDelegate;



@interface MKPlaceCardActionsRowView : UIView <MKActionRowItemViewDelegate>

 {
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    NSUInteger _maxButtonsPerRow;
    NSUInteger _style;
}


@property (readonly, nonatomic) NSArray *actionButtons; // ivar: _actionButtons
@property (weak, nonatomic) NSObject<MKPlaceActionManagerProtocol> *actionManager; // ivar: _actionManager
@property (nonatomic) Class buttonBackgroundViewClass; // ivar: _buttonBackgroundViewClass
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate


-(NSUInteger)maxButtonsPerRow;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)actionButtonPressed:(id)arg0 ;
-(void)actionRowSelected:(id)arg0 ;
-(void)createActionViews;
-(void)createActions;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(void)invalidateActionButtons;
-(void)layoutButtons;


@end


#endif