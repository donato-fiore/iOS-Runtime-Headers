// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMODERNLABELLEDATOMLIST_H
#define MFMODERNLABELLEDATOMLIST_H

@class UIView, NSMutableArray, NSString, UILabel, NSArray, UIColor;
@protocol MFPassthroughViewProvider, MFModernAddressAtomDelegate, MFModernLabelledAtomListDelegate;



@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate>

 {
    *void _addressBook;
    NSMutableArray *_addressAtoms;
    NSString *_title;
    BOOL _labelVisible;
    BOOL _needsReflow;
    CGFloat _previousWidth;
    UILabel *_lastBaselineDeceptionLabel;
}


@property (copy, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFModernLabelledAtomListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIColor *labelTextColor; // ivar: _labelTextColor
@property (nonatomic, getter=isLabelVisible) BOOL labelVisible;
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (readonly, nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewsToDodge; // ivar: _viewsToDodge


+(CGFloat)atomLineHeight;
+(CGFloat)spaceBetweenColonAndFirstAtomNaturalEdge;
+(id)defaultLabelFont;
+(id)primaryLabelFont;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_remainingSpaceForRowAtPoint:(struct CGPoint )arg0 ;
-(id)addressAtoms;
-(id)atomDisplayStrings;
-(id)initWithLabel:(id)arg0 title:(id)arg1 addressBook:(*void)arg2 ;
-(id)passthroughViews;
-(id)title;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGPoint )baselinePointForRow:(NSUInteger)arg0 ;
-(struct CGRect )_frameForAtomAtIndex:(NSUInteger)arg0 withStartingPoint:(struct CGPoint )arg1 row:(*NSUInteger)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_reflow;
-(void)_reflowIfNeeded;
-(void)_setNeedsReflow;
-(void)addressAtom:(id)arg0 displayStringDidChange:(id)arg1 ;
-(void)addressBookDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)crossFadeLabelVisibility:(BOOL)arg0 atomSeparatorStyle:(int)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)dealloc;
-(void)enumerateAddressAtomsUsingBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAddressAtomScale:(CGFloat)arg0 ;
-(void)setAddressAtomSeparatorStyle:(int)arg0 ;
-(void)setAddressAtomTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setAddressAtomsArePrimary:(BOOL)arg0 ;
-(void)setAtomAlpha:(CGFloat)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setOverrideFont:(id)arg0 ;
-(void)updateAtomsForVIP;


@end


#endif