// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACESECTIONROWVIEW_H
#define MUPLACESECTIONROWVIEW_H

@class MKViewWithHairline, NSString;
@protocol MUSelectable;



@interface MUPlaceSectionRowView : MKViewWithHairline <MUSelectable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL handlesHighlighting; // ivar: _handlesHighlighting
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundColor:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif