// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGROUTINGBUTTON_H
#define MRUNOWPLAYINGROUTINGBUTTON_H

@class MPButton, NSString, CCUICAPackageView;
@protocol UIPointerInteractionDelegate;



@interface MRUNowPlayingRoutingButton : MPButton <UIPointerInteractionDelegate>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePackage;
-(void)updatePackageState;


@end


#endif