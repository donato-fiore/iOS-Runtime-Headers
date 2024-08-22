// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFBASICTABLEITEM_H
#define WFBASICTABLEITEM_H

@class UIImage, NSString;


#import "WFTableItem.h"

@interface WFBasicTableItem : WFTableItem

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (nonatomic) NSUInteger primaryTextStyle; // ivar: _primaryTextStyle
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 image:(id)arg3 ;
-(void)configureCell:(id)arg0 ;


@end


#endif