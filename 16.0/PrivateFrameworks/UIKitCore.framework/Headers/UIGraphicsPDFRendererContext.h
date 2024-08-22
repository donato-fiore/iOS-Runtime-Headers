// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGRAPHICSPDFRENDERERCONTEXT_H
#define UIGRAPHICSPDFRENDERERCONTEXT_H



#import "UIGraphicsRendererContext.h"

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext

@property CGRect documentBounds; // ivar: _documentBounds
@property BOOL inPage; // ivar: _inPage
@property CGRect pageBounds; // ivar: _pageBounds
@property (readonly, nonatomic) CGRect pdfContextBounds;


-(void)addDestinationWithName:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)beginPageWithBounds:(struct CGRect )arg0 pageInfo:(id)arg1 ;
-(void)setDestinationWithName:(id)arg0 forRect:(struct CGRect )arg1 ;
-(void)setURL:(id)arg0 forRect:(struct CGRect )arg1 ;
-(void)updateAuxInfo:(id)arg0 ;


@end


#endif