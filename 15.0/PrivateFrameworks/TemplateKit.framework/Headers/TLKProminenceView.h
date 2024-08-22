// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKPROMINENCEVIEW_H
#define TLKPROMINENCEVIEW_H

@class UIView;



@interface TLKProminenceView : UIView

@property (nonatomic) NSUInteger prominence; // ivar: _prominence


+(id)viewWithProminence:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithProminence:(NSUInteger)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif