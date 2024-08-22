// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHECKMARKCELL_H
#define HUCHECKMARKCELL_H

@class UIImage;


#import "HUActivityIndicatorCell.h"

@interface HUCheckmarkCell : HUActivityIndicatorCell

@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIImage *checkedImage; // ivar: _checkedImage
@property (retain, nonatomic) UIImage *uncheckedImage; // ivar: _uncheckedImage


-(id)description;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif