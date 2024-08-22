// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSDELETEBUTTONCELL_H
#define PSDELETEBUTTONCELL_H

@class UIColor;


#import "PSTableCell.h"

@interface PSDeleteButtonCell : PSTableCell {
    UIColor *_buttonColor;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif