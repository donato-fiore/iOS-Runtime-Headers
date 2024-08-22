// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSALTERNATEROUTESVIEW_H
#define CPSALTERNATEROUTESVIEW_H

@class UIView, NSArray, NSString;
@protocol CPSRouteRowInteracting, CPSLinearFocusProviding, CPSAlternateRouteSelecting;



@interface CPSAlternateRoutesView : UIView <CPSRouteRowInteracting, CPSLinearFocusProviding>



@property (retain, nonatomic) NSArray *availableRouteChoices; // ivar: _availableRouteChoices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexForSelectedRoute; // ivar: _indexForSelectedRoute
@property (retain, nonatomic) UIView *rowStack; // ivar: _rowStack
@property (weak, nonatomic) NSObject<CPSAlternateRouteSelecting> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(void)_reloadRows;
-(void)didSelectRow:(id)arg0 representingRouteChoice:(id)arg1 ;


@end


#endif