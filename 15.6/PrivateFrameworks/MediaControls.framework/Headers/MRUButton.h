// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUBUTTON_H
#define MRUBUTTON_H

@class MPButton, NSString;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUButton : MPButton <MRUVisualStylingProviderObserver>



@property (nonatomic) CGFloat cursorScale; // ivar: _cursorScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pointerStyle; // ivar: _pointerStyle
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerStyleWithProposedEffect:(id)arg0 proposedShape:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif