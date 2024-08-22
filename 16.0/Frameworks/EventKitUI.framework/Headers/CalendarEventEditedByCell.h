// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALENDAREVENTEDITEDBYCELL_H
#define CALENDAREVENTEDITEDBYCELL_H

@class UILabel;
@protocol EKCellShortener;


#import "EKUIConstrainedFontsTableViewCell.h"

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    BOOL _valuePlaceholder;
}


@property (readonly, retain, nonatomic) UILabel *detailTextLabel2;
@property (weak, nonatomic) NSObject<EKCellShortener> *shortener; // ivar: _shortener
@property (readonly, retain, nonatomic) UILabel *textLabel2;


-(BOOL)detailText2IsPlaceholder;
-(BOOL)detailTextIsPlaceholder;
-(void)_checkValueWidth;
-(void)_copyTextLabelAttributesFrom:(id)arg0 to:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDetailText2IsPlaceholder:(BOOL)arg0 ;
-(void)setDetailTextIsPlaceholder:(BOOL)arg0 ;


@end


#endif