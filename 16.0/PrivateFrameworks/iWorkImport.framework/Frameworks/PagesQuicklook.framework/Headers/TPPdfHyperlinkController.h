// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPDFHYPERLINKCONTROLLER_H
#define TPPDFHYPERLINKCONTROLLER_H

@class TSAPdfHyperlinkController;



@interface TPPdfHyperlinkController : TSAPdfHyperlinkController {
    CGRect mCanvasRect;
}




+(id)URLWithDestinationName:(id)arg0 ;
+(id)destinationFromSectionURL:(id)arg0 ;
+(id)footnoteMarkNameForIndex:(NSUInteger)arg0 ;
+(id)footnoteRefNameForIndex:(NSUInteger)arg0 ;
-(BOOL)ignoreUrl:(id)arg0 ;
-(BOOL)isDestination:(id)arg0 ;
-(id)destinationFromUrl:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(struct CGRect )canvasRect;
-(void)setCanvasRect:(struct CGRect )arg0 ;


@end


#endif