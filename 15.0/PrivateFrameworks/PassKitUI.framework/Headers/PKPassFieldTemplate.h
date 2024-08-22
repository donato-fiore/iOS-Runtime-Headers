// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSFIELDTEMPLATE_H
#define PKPASSFIELDTEMPLATE_H

@class NSNumber, UIFont;

#import <Foundation/Foundation.h>


@interface PKPassFieldTemplate : NSObject

@property (retain, nonatomic) NSNumber *boxedLabelCaseStyle; // ivar: _boxedLabelCaseStyle
@property (retain, nonatomic) NSNumber *boxedSuppressesEmptyLabel; // ivar: _boxedSuppressesEmptyLabel
@property (retain, nonatomic) NSNumber *boxedSuppressesLabel; // ivar: _boxedSuppressesLabel
@property (retain, nonatomic) NSNumber *boxedTextAlignment; // ivar: _boxedTextAlignment
@property (retain, nonatomic) NSNumber *boxedValueCanWrap; // ivar: _boxedValueCanWrap
@property (retain, nonatomic) NSNumber *boxedValueSignificant; // ivar: _boxedValueSignificant
@property (retain, nonatomic) NSNumber *boxedVerticalPadding; // ivar: _boxedVerticalPadding
@property (nonatomic) NSInteger labelCaseStyle;
@property (retain, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (nonatomic) BOOL suppressesEmptyLabel;
@property (nonatomic) BOOL suppressesLabel;
@property (nonatomic) NSInteger textAlignment;
@property (nonatomic) BOOL valueCanWrap;
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (nonatomic) BOOL valueSignificant;
@property (nonatomic) CGFloat verticalPadding;
@property (retain, nonatomic) Class viewSubclass; // ivar: _viewSubclass


+(id)_templateByResolvingTemplate:(id)arg0 withDefault:(id)arg1 ;
+(id)fieldTemplateWithTextAlignment:(NSInteger)arg0 ;
+(id)fieldTemplateWithVerticalPadding:(CGFloat)arg0 ;
+(id)fieldTemplateWithViewSubclass:(Class)arg0 ;


@end


#endif