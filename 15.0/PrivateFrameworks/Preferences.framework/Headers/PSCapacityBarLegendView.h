// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSCAPACITYBARLEGENDVIEW_H
#define PSCAPACITYBARLEGENDVIEW_H

@class UIView, UILabel, UIColor, NSString;


#import "PSLegendColorView.h"

@interface PSCapacityBarLegendView : UIView {
    PSLegendColorView *_legendColor;
    UILabel *_legendLabel;
}


@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;


-(id)initWithCapacityBarCategory:(id)arg0 ;
-(void)createConstraints;


@end


#endif