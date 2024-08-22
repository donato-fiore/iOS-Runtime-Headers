// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERICONTEXTROW_H
#define PKPAYLATERICONTEXTROW_H

@class UIFont, NSString, UIColor, UIImage;
@protocol PKPayLaterDashboardIconRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterIconTextRow : NSObject <PKPayLaterDashboardIconRow>

 {
    id *_selectionHandler;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (retain, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (retain, nonatomic) UIColor *amountTextColor; // ivar: _amountTextColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) NSUInteger maskType; // ivar: _maskType
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIFont *tertiaryFont; // ivar: _tertiaryFont
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText
@property (retain, nonatomic) UIColor *tertiaryTextColor; // ivar: _tertiaryTextColor


+(id)rowConfiguredForDisputeLayoutWithFiancingPlan:(id)arg0 payment:(id)arg1 selectionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithPrimaryTitle:(id)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelectionWithContinueBlock:(id)arg0 ;


@end


#endif