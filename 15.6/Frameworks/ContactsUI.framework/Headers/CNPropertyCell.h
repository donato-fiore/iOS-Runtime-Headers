// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYCELL_H
#define CNPROPERTYCELL_H

@class UIResponder;
@protocol CNPropertyCellDelegate, CNPresenterDelegate;


#import "CNLabeledCell.h"
#import "CNPropertyGroupItem.h"

@interface CNPropertyCell : CNLabeledCell

@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIResponder *firstResponderItem; // ivar: _firstResponderItem
@property (nonatomic) BOOL forceSuggested; // ivar: _forceSuggested
@property (nonatomic, getter=isHighlightedProperty) BOOL highlightedProperty; // ivar: _highlightedProperty
@property (nonatomic) BOOL ignoreSuggested; // ivar: _ignoreSuggested
@property (nonatomic, getter=isImportant) BOOL important; // ivar: _important
@property (nonatomic) CGFloat labelWidth; // ivar: _labelWidth
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (weak, nonatomic) id *property; // ivar: _property
@property (readonly, nonatomic) CNPropertyGroupItem *propertyItem;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic) BOOL supportsTintColorValue;
@property (readonly, nonatomic) BOOL supportsValueColorUsesLabelColor;


+(id)labelStringFromAppName:(id)arg0 andPropertyLabel:(id)arg1 ;
-(BOOL)shouldShowSuggestionOrigin;
-(id)appNameForSuggestion:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelString;
-(id)valueString;
-(void)copy:(id)arg0 ;
-(void)performAccessoryAction;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateValueWithPropertyItem:(id)arg0 ;
-(void)updateWithPropertyItem:(id)arg0 ;


@end


#endif