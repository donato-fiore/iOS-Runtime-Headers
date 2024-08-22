// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTPAGERENDERER_H
#define UIPRINTPAGERENDERER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface UIPrintPageRenderer : NSObject {
    NSMutableArray *_printFormatters;
    *CGContext _printContext;
    NSInteger _cachedPageCount;
}


@property NSInteger currentRenderingQuality; // ivar: _currentRenderingQuality
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (readonly, nonatomic) NSInteger numberOfPages;
@property (nonatomic) CGRect paperRect; // ivar: _paperRect
@property (copy) NSArray *printFormatters;
@property (nonatomic) CGRect printableRect; // ivar: _printableRect
@property NSInteger requestedRenderingQuality; // ivar: _requestedRenderingQuality


-(BOOL)_startPrintContext:(id)arg0 printSettings:(id)arg1 ;
-(NSInteger)_maxFormatterPage;
-(NSInteger)currentRenderingQualityForRequestedRenderingQuality:(NSInteger)arg0 ;
-(id)printFormattersForPageAtIndex:(NSInteger)arg0 ;
-(void)_drawPage:(NSInteger)arg0 ;
-(void)_endPrintContext:(id)arg0 success:(BOOL)arg1 ;
-(void)_endSaveContext;
-(void)_removePrintFormatter:(id)arg0 ;
-(void)_startSaveContext:(struct CGContext *)arg0 ;
-(void)addPrintFormatter:(id)arg0 startingAtPageAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)drawContentForPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawFooterForPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawHeaderForPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawPrintFormatter:(id)arg0 forPageAtIndex:(NSInteger)arg1 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ;


@end


#endif