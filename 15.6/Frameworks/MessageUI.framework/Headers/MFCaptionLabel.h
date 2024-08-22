// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCAPTIONLABEL_H
#define MFCAPTIONLABEL_H

@class UILabel, NSArray;
@protocol MFCaptionLabelDataSource;



@interface MFCaptionLabel : UILabel {
    BOOL _needsLabelUpdate;
}


@property (retain, nonatomic) NSArray *bccRecipients; // ivar: _bccRecipients
@property (retain, nonatomic) NSArray *ccRecipients; // ivar: _ccRecipients
@property (weak, nonatomic) NSObject<MFCaptionLabelDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSArray *fromSenders; // ivar: _fromSenders
@property (retain, nonatomic) NSArray *otherSigners; // ivar: _otherSigners
@property (nonatomic) BOOL preventAutoUpdatingLabel; // ivar: _preventAutoUpdatingLabel
@property (retain, nonatomic) NSArray *toRecipients; // ivar: _toRecipients


+(id)attributedStringsCache;
-(id)_chevronAttributedString;
-(id)_chevronImage;
-(id)_formattedAttributedString;
-(id)_stringAtIndexForCombinedRecipientLists:(NSUInteger)arg0 ;
-(id)_whitespaceStringWithWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setNeedsLabelUpdate;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateLabelNow;


@end


#endif