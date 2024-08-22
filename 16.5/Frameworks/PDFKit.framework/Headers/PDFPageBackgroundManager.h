// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGEBACKGROUNDMANAGER_H
#define PDFPAGEBACKGROUNDMANAGER_H

@protocol PDFPageDrawProgressCallback;

#import <Foundation/Foundation.h>

#import "PDFPageBackgroundManagerPrivate.h"

@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback>

 {
    PDFPageBackgroundManagerPrivate *_private;
}




-(BOOL)_expectedQualityIndexForPageIndex:(NSUInteger)arg0 forQuality:(*int)arg1 ;
-(BOOL)_findPageIndexNeedingUpdate:(*NSUInteger)arg0 forQuality:(*int)arg1 ;
-(BOOL)drawProgressCallback;
-(id)backgroundImageForPageIndex:(NSUInteger)arg0 withFoundQuality:(*int)arg1 ;
-(id)initWithDelegate:(id)arg0 andRenderingProperties:(id)arg1 ;
-(void)_cleanup;
-(void)_drawPageImage:(NSUInteger)arg0 forQuality:(int)arg1 ;
-(void)_shiftImagesAtIndex:(NSUInteger)arg0 downwards:(BOOL)arg1 ;
-(void)_update;
-(void)cancel;
-(void)dealloc;
-(void)didInsertPageAtIndex:(NSUInteger)arg0 ;
-(void)didRemovePageAtIndex:(NSUInteger)arg0 ;
-(void)didSwapPageAtIndex:(NSUInteger)arg0 withIndex:(NSUInteger)arg1 ;
-(void)forceSetBackgroundImage:(id)arg0 forPageIndex:(NSUInteger)arg1 ;
-(void)forceUpdateActivePageIndex:(NSUInteger)arg0 withMaxDuration:(CGFloat)arg1 ;
-(void)updateActivePageIndex:(NSUInteger)arg0 ;
-(void)willForceUpdate;


@end


#endif