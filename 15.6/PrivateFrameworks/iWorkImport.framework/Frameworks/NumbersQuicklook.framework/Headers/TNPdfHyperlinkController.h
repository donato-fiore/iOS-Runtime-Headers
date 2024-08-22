// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPDFHYPERLINKCONTROLLER_H
#define TNPDFHYPERLINKCONTROLLER_H

@class TSAPdfHyperlinkController;



@interface TNPdfHyperlinkController : TSAPdfHyperlinkController {
    CGRect mCanvasRect;
}




-(BOOL)isDestination:(id)arg0 ;
-(id)destinationFromUrl:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(struct CGRect )canvasRect;
-(void)setCanvasRect:(struct CGRect )arg0 ;


@end


#endif