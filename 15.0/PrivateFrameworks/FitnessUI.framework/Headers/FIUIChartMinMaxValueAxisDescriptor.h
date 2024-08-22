// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTMINMAXVALUEAXISDESCRIPTOR_H
#define FIUICHARTMINMAXVALUEAXISDESCRIPTOR_H

@class NSString, UIColor, NSNumber, UIFont;
@protocol FIUIChartAxisDescriptor;

#import <Foundation/Foundation.h>


@interface FIUIChartMinMaxValueAxisDescriptor : NSObject <FIUIChartAxisDescriptor>



@property (nonatomic) CGFloat axisDescriptorPadding; // ivar: _axisDescriptorPadding
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideClippedLabels;
@property (retain, nonatomic) UIColor *highlightedLabelColor; // ivar: _highlightedLabelColor
@property (retain, nonatomic) UIColor *highlightedSubLabelColor;
@property (retain, nonatomic) NSNumber *highlightedValue; // ivar: _highlightedValue
@property (nonatomic) NSUInteger labelAlignment;
@property (retain, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (retain, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (retain, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (retain, nonatomic) UIColor *selectedLabelColor;
@property (nonatomic) CGFloat shadowBlur; // ivar: _shadowBlur
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat subAxisDescriptorPadding;
@property (nonatomic) NSUInteger subLabelAlignment;
@property (retain, nonatomic) UIFont *subLabelFont;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *unhighlightedLabelColor; // ivar: _unhighlightedLabelColor
@property (retain, nonatomic) UIColor *unhighlightedSubLabelColor;


-(Class)expectedDataType;
-(id)_axisLabelForValue:(id)arg0 highlighted:(BOOL)arg1 ;
-(id)axisLabels;


@end


#endif