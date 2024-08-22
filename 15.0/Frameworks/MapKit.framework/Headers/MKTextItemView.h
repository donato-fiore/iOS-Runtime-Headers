// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTEXTITEMVIEW_H
#define MKTEXTITEMVIEW_H

@class UIView, NSArray;



@interface MKTextItemView : UIView

@property (copy, nonatomic) NSArray *labels; // ivar: _labels


-(id)initWithStrings:(id)arg0 labelsFont:(id)arg1 labelsSpacing:(CGFloat)arg2 labelsNumberOfLines:(NSInteger)arg3 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif