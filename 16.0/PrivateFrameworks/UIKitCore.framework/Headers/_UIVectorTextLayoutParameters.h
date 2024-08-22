// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVECTORTEXTLAYOUTPARAMETERS_H
#define _UIVECTORTEXTLAYOUTPARAMETERS_H

@class NSAttributedString, NSString;
@protocol _UIVectorTextLayoutParameters, NSCopying;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIVectorTextLayoutParameters : NSObject <_UIVectorTextLayoutParameters, NSCopying>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lineBreakMode; // ivar: _lineBreakMode
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic) CGSize withinSize; // ivar: _withinSize


+(id)parametersSuitableForView:(id)arg0 ;
-(BOOL)isEqualToParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(void)_copyFromParameters:(id)arg0 ;


@end


#endif