// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERTITLEDETAILVALUEROW_H
#define PKPAYLATERTITLEDETAILVALUEROW_H

@class NSString, UIColor, UIFont, UIImage;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterTitleDetailValueRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSString *_title;
    NSString *_detail;
    NSString *_value;
    id *_selectionHandler;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *detailColor; // ivar: _detailColor
@property (retain, nonatomic) UIFont *detailFont; // ivar: _detailFont
@property (retain, nonatomic) UIImage *detailIcon; // ivar: _detailIcon
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalMargin; // ivar: _horizontalMargin
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) CGFloat labelPadding; // ivar: _labelPadding
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UIColor *valueColor; // ivar: _valueColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (nonatomic) CGFloat verticalMargin; // ivar: _verticalMargin


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 value:(id)arg2 accessory:(NSUInteger)arg3 selectionHandler:(id)arg4 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif