// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFVIEW_H
#define SBFVIEW_H

@class UIView, NSArray, NSString;
@protocol SBFCustomImplicitPropertyAnimating;



@interface SBFView : UIView <SBFCustomImplicitPropertyAnimating>



@property (copy, nonatomic) NSArray *animatedLayerProperties; // ivar: animatedLayerProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didMoveToWindowHandler; // ivar: _didMoveToWindowHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize intrinsicContentSize; // ivar: _intrinsicContentSize
@property (readonly) Class superclass;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)didMoveToWindow;


@end


#endif