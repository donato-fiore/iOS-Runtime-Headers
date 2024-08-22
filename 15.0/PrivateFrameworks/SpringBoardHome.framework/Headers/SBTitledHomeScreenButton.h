// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTITLEDHOMESCREENBUTTON_H
#define SBTITLEDHOMESCREENBUTTON_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "SBHomeScreenButton.h"

@interface SBTitledHomeScreenButton : SBHomeScreenButton <UIPointerInteractionDelegate>



@property (copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) SBTitledHomeScreenButtonMetrics metrics; // ivar: _metrics
@property (nonatomic) CGSize preferredContentFittingSize; // ivar: _preferredContentFittingSize
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(id)contentImageWithTitle:(id)arg0 ;
-(id)defaultContentImage;
-(id)initWithFrame:(struct CGRect )arg0 backgroundView:(id)arg1 type:(NSInteger)arg2 content:(id)arg3 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif