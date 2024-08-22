// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGRADARENTRYCELL_H
#define PKTEXTINPUTDEBUGRADARENTRYCELL_H

@class UICollectionViewCell, UIView, UIImageView, NSLayoutConstraint, UIButton, UITextField, UILabel, NSString;
@protocol PKTextInputDebugRadarEntryCellDelegate;


#import "PKTextInputDebugLogEntry.h"

@interface PKTextInputDebugRadarEntryCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *_borderView; // ivar: __borderView
@property (readonly, nonatomic) UIImageView *_drawingImageView; // ivar: __drawingImageView
@property (retain, nonatomic) NSLayoutConstraint *_drawingViewAspectRatioConstraint; // ivar: __drawingViewAspectRatioConstraint
@property (readonly, nonatomic) UIButton *_includedButton; // ivar: __includedButton
@property (readonly, nonatomic) UITextField *_intendedResultField; // ivar: __intendedResultField
@property (readonly, nonatomic) UIView *_lineSeparator; // ivar: __lineSeparator
@property (readonly, nonatomic) UILabel *_resultTextLabel; // ivar: __resultTextLabel
@property (readonly, nonatomic) NSInteger contentLevel; // ivar: _contentLevel
@property (weak, nonatomic) NSObject<PKTextInputDebugRadarEntryCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger entryIndex; // ivar: _entryIndex
@property (nonatomic) BOOL includedEntry; // ivar: _includedEntry
@property (copy, nonatomic) NSString *intendedText; // ivar: _intendedText
@property (readonly, nonatomic) PKTextInputDebugLogEntry *logEntry; // ivar: _logEntry


-(id)_attributedResultTextWithReferenceString:(id)arg0 referenceStringOffset:(NSInteger)arg1 recognitionResult:(id)arg2 affectedRange:(struct _NSRange )arg3 resultType:(NSInteger)arg4 contentLength:(NSInteger)arg5 ;
-(id)_createIncludedButton;
-(id)_createIntendedField;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleIncludedButton;
-(void)_handleIntendedFieldChanged;
-(void)_setupViews;
-(void)_updateBorderView;
-(void)_updateDrawingView;
-(void)_updateIncludedButton;
-(void)_updateIntendedTextField;
-(void)_updateResultTextLabel;


@end


#endif