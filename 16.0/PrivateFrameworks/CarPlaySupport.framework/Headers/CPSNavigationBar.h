// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSNAVIGATIONBAR_H
#define CPSNAVIGATIONBAR_H

@class UINavigationBar, NSString, NSMapTable;
@protocol CPSLinearFocusProviding;



@interface CPSNavigationBar : UINavigationBar <CPSLinearFocusProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *lastFocusedItems; // ivar: _lastFocusedItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popNavigationItemAnimated:(BOOL)arg0 ;
-(id)preferredFocusEnvironments;
-(void)didMoveToSuperview;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;


@end


#endif