// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABBARDROPEXPANSIONVIEW_H
#define TABBARDROPEXPANSIONVIEW_H

@class UIView, NSString;
@protocol UIDropInteractionDelegate_Private, TabBarDropExpansionViewDelegate;



@interface TabBarDropExpansionView : UIView <UIDropInteractionDelegate_Private>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TabBarDropExpansionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;


@end


#endif