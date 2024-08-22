// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSENTITYMAPBUTTON_H
#define CPSENTITYMAPBUTTON_H

@class NSString;
@protocol CPSActionButtonLayoutDelegate;


#import "CPSActionButton.h"

@interface CPSEntityMapButton : CPSActionButton <CPSActionButtonLayoutDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger entityMapButtonType; // ivar: _entityMapButtonType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buttonWithEntityMapButtonType:(NSUInteger)arg0 ;
-(id)buttonAttributes;
-(id)buttonBackgroundColor;
-(id)buttonImageTintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )buttonGlyphSize;
-(struct CGSize )buttonSize;
-(void)layoutSubviews;
-(void)setNeedsLayout;


@end


#endif