// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRICHLINKCELL_H
#define SFRICHLINKCELL_H

@class UICollectionViewCell, UIVisualEffectView, UIView, LPLinkView, SLAttributionView, NSString, SLHighlight, LPLinkMetadata;
@protocol SFRichLinkModel;



@interface SFRichLinkCell : UICollectionViewCell <SFRichLinkModel>

 {
    UIVisualEffectView *_linkBackgroundView;
    UIView *_linkViewContainer;
    LPLinkView *_linkView;
}


@property (retain, nonatomic) SLAttributionView *attributionView; // ivar: _attributionView
@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(BOOL)shouldShowContextMenuFromPoint:(struct CGPoint )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_updateAttributionViewBackground;
-(void)_updateVibrancy;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif