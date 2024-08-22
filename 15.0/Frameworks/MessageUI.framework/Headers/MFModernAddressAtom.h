// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMODERNADDRESSATOM_H
#define MFMODERNADDRESSATOM_H

@class UIControl, CNAtomView, NSString, UIFont;
@protocol CNAtomViewResembling, MFModernAddressAtomDelegate, ECEmailAddressConvertible;



@interface MFModernAddressAtom : UIControl <CNAtomViewResembling>

 {
    id<MFModernAddressAtomDelegate> *_delegate;
    CNAtomView *_atomView;
    *void _person;
    id<ECEmailAddressConvertible> *_fullAddress;
    NSString *_displayString;
    unsigned int _maxWidth;
    int _identifier;
    BOOL _addressIsPhoneNumber;
    BOOL _updatedABPerson;
    BOOL _isDisplayStringFromAddressBook;
    *void _addressBook;
    NSString *_addressIdentifier;
}


@property (readonly, nonatomic) NSString *addressIdentifier;
@property (readonly, nonatomic) CGPoint baselinePoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic) CGFloat firstLineIndent; // ivar: _firstLineIndent
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesVIPIndicator;
@property (nonatomic) BOOL isPrimaryAddressAtom;
@property (readonly, nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSUInteger presentationOptions;
@property (nonatomic) CGFloat scale;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) BOOL separatorIsLeftAligned;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIFont *titleFont;


+(id)copyDisplayStringForAddress:(id)arg0 usingAddressBook:(*void)arg1 useAbbreviatedName:(BOOL)arg2 ;
-(*void)ABPerson;
-(BOOL)isDisplayStringFromAddressBook;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)contactWithKeysToFetch:(id)arg0 ;
-(id)displayString;
-(id)emailAddress;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithAddress:(id)arg0 presentationOptions:(NSUInteger)arg1 isPhoneNumber:(BOOL)arg2 maxWidth:(CGFloat)arg3 addressBook:(*void)arg4 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)unmodifiedAddressString;
-(id)viewForLastBaselineLayout;
-(int)ABPropertyType;
-(int)identifier;
-(struct CGRect )_highlightBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_displayStringDidChange;
-(void)_updateABPerson;
-(void)_updateDisplayStringIncludingABPerson:(BOOL)arg0 ;
-(void)addressBookDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)performBuildInAnimationFromTextColor:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)setAddress:(id)arg0 ;
-(void)setAtomFont:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setMaxWidth:(unsigned int)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;


@end


#endif