// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKHIGHLIGHTANNOTATIONCONTROLLER_H
#define AKHIGHLIGHTANNOTATIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "AKHighlightAnnotation.h"
#import "AKController.h"

@interface AKHighlightAnnotationController : NSObject

@property (retain) AKHighlightAnnotation *continuousHighlight; // ivar: _continuousHighlight
@property (weak) AKController *controller; // ivar: _controller


-(BOOL)_adaptExistingHighlightsToNewHighlight:(id)arg0 onPageController:(id)arg1 firstModifiedHighlight:(*id)arg2 ;
-(BOOL)_clearHighlightsWithStyleMatchingMask:(NSUInteger)arg0 except:(id)arg1 inRange:(struct _NSRange )arg2 onPageController:(id)arg3 ;
-(id)_createHighlightAnnotationWithAttributeTag:(NSInteger)arg0 ;
-(id)_highlightsInCharacterIndexRange:(struct _NSRange )arg0 onPageController:(id)arg1 ;
-(id)highlightsWithinSelection;
-(id)initWithController:(id)arg0 ;
-(void)beginContinuousHighlighting;
-(void)clearHighlightsWithinSelection;
-(void)continueHighlighting;
-(void)endContinuousHighlighting;
-(void)performOneShotHighlightWithAttributeTag:(NSInteger)arg0 ;


@end


#endif