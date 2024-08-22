// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEENCYCLOPEDICFACTOIDVIEW_H
#define MKPLACEENCYCLOPEDICFACTOIDVIEW_H

@class UILongPressGestureRecognizer, NSLayoutConstraint, NSString;
@protocol UIGestureRecognizerDelegate, NSItemProviderWriting;


#import "MKPlaceSectionRowView.h"
#import "MKVibrantLabel.h"
#import "_MKUILabel.h"

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView <UIGestureRecognizerDelegate>

 {
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    BOOL _isStandAlone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NSItemProviderWriting> *draggableContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKVibrantLabel *keyLabel; // ivar: _keyLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKUILabel *valueLabel; // ivar: _valueLabel


-(id)_keyLabelWithString:(id)arg0 ;
-(id)_valueLabelWithString:(id)arg0 ;
-(id)initWithTextItem:(id)arg0 isStandAloneFactoid:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
-(void)_handleLongPress:(id)arg0 ;
-(void)_menuDismissed:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)setUpConstraints;


@end


#endif