// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19HEALTHVISUALIZATION15SNIPPETTILEVIEW_H
#define _TTC19HEALTHVISUALIZATION15SNIPPETTILEVIEW_H

@class UIView;



@interface _TtC19HealthVisualization15SnippetTileView : UIView {
    ? context;
    ? glyph;
    ? hkType;
    ? detail;
    ? snippetTileViewProvider;
    ? snippetView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)dayChanged;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLabels;


@end


#endif