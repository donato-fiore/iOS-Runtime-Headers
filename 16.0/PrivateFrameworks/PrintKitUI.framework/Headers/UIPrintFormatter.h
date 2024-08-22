// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTFORMATTER_H
#define UIPRINTFORMATTER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIPrintPageRenderer.h"

@interface UIPrintFormatter : NSObject <NSCopying>

 {
    BOOL _needsRecalc;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) BOOL imagePDFAnnotations; // ivar: _imagePDFAnnotations
@property (nonatomic) CGFloat maximumContentHeight; // ivar: _maximumContentHeight
@property (nonatomic) CGFloat maximumContentWidth; // ivar: _maximumContentWidth
@property (readonly, nonatomic) NSInteger pageCount; // ivar: _pageCount
@property (nonatomic) UIEdgeInsets perPageContentInsets; // ivar: _perPageContentInsets
@property (weak, nonatomic) UIPrintPageRenderer *printPageRenderer; // ivar: _printPageRenderer
@property (readonly, nonatomic) BOOL requiresMainThread; // ivar: _requiresMainThread
@property (nonatomic) NSInteger startPage; // ivar: _startPage


-(NSInteger)_recalcPageCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct CGRect )_pageContentRect:(BOOL)arg0 ;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)_recalcIfNecessary;
-(void)_setNeedsRecalc;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;
-(void)removeFromPrintPageRenderer;


@end


#endif