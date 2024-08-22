// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPDFHYPERLINKCONTROLLER_H
#define KNPDFHYPERLINKCONTROLLER_H

@class TSAPdfHyperlinkController, NSArray;



@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {
    NSArray *_slides;
    CGRect _canvasRect;
}


@property (nonatomic) NSInteger currentSlideNumber; // ivar: _currentSlideNumber


-(BOOL)ignoreUrl:(id)arg0 ;
-(BOOL)isDestination:(id)arg0 ;
-(NSInteger)getFirstNonHiddenIndex:(NSUInteger)arg0 delta:(NSInteger)arg1 ;
-(id)currentSlideName;
-(id)destinationFromUrl:(id)arg0 ;
-(id)initWithShow:(id)arg0 ;
-(id)nameForSlide:(id)arg0 ;
-(id)nameFromIndex:(NSUInteger)arg0 ;
-(struct CGRect )canvasRect;
-(void)addHyperlinksForReps:(id)arg0 targetRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;


@end


#endif