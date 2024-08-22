// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNMATERIALBUTTON_H
#define _UNMATERIALBUTTON_H

@class UIButton, MTVisualStylingProvider, NSString, NSMutableDictionary, NSArray;
@protocol MTVisualStylingRequiring;



@interface _UNMaterialButton : UIButton <MTVisualStylingRequiring>

 {
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *imageViewStyling; // ivar: _imageViewStyling
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) NSMutableDictionary *styling; // ivar: _styling
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(void)_applyButtonStyling;
-(void)_applyImageViewStyling;
-(void)_applyStyling;
-(void)_setFlagsRelatedToState:(NSUInteger)arg0 to:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImageViewStyle:(NSInteger)arg0 forState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setStyle:(NSInteger)arg0 forState:(NSUInteger)arg1 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif