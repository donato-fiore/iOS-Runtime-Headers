// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPROGRESSROW_H
#define PKPAYLATERPROGRESSROW_H

@class UIFont, NSAttributedString, UIColor, NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>

#import "PKGradientVerticalConnector.h"

@interface PKPayLaterProgressRow : NSObject <PKPayLaterCollectionViewRow>



@property (retain, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (copy, nonatomic) NSAttributedString *amountText; // ivar: _amountText
@property (retain, nonatomic) UIColor *amountTextColor; // ivar: _amountTextColor
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector; // ivar: _bottomConnector
@property (nonatomic) BOOL centerPrimaryText; // ivar: _centerPrimaryText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (copy, nonatomic) NSAttributedString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic) NSInteger rowIndex; // ivar: _rowIndex
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSAttributedString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetType; // ivar: _targetType
@property (copy, nonatomic) NSAttributedString *tertiaryText; // ivar: _tertiaryText
@property (retain, nonatomic) UIColor *tertiaryTextColor; // ivar: _tertiaryTextColor
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector; // ivar: _topConnector


+(id)progressRowsWithInstallmentCount:(NSInteger)arg0 firstRowFont:(id)arg1 dynamicContentPage:(id)arg2 ;
+(void)_purchaseStringsForInstallmentNumber:(NSUInteger)arg0 title:(*id)arg1 amountString:(*id)arg2 dynamicContentPage:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithRowIndex:(NSInteger)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 amountText:(id)arg3 selectionHandler:(id)arg4 ;
-(id)initWithRowIndex:(NSInteger)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif