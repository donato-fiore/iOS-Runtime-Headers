// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOCUMENTSTYLERENDERER_H
#define SXDOCUMENTSTYLERENDERER_H

@class NSString, UIView;
@protocol SXViewportChangeListener, SXDocumentStyleRenderer, SXGradientFactory;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXGradientFactory> *gradientFactory; // ivar: _gradientFactory
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topBackgroundView; // ivar: _topBackgroundView
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)initWithViewport:(id)arg0 gradientFactory:(id)arg1 ;
-(void)applyBackgroundColorForStyle:(id)arg0 onView:(id)arg1 ;
-(void)applyStyle:(id)arg0 onView:(id)arg1 ;
-(void)applyTopBackgroundForStyle:(id)arg0 onView:(id)arg1 ;
-(void)layoutTopBackgroundView;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif