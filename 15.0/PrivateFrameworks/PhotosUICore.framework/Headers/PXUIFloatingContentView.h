// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIFLOATINGCONTENTVIEW_H
#define PXUIFLOATINGCONTENTVIEW_H

@class UIFloatingContentView, NSString;
@protocol PXAdjustableContentsView;



@interface PXUIFloatingContentView : UIFloatingContentView <PXAdjustableContentsView>



@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;


@end


#endif