// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBPAGINATIONINFO_H
#define UIWEBPAGINATIONINFO_H

@class NSArray;
@protocol WebDocumentView;

#import <Foundation/Foundation.h>

#import "UIWebDocumentView.h"

@interface UIWebPaginationInfo : NSObject {
    NSObject<WebDocumentView> *_documentView;
    CGFloat _scaleFactor;
    CGSize _layoutSize;
    NSArray *_pageRects;
}


@property (readonly, nonatomic) CGFloat lastPageHeight;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (retain, nonatomic) UIWebDocumentView *webDocumentView; // ivar: _webDocumentView


-(CGFloat)scaleFactor;
-(id)documentView;
-(id)initWithDocumentView:(id)arg0 scaleFactor:(CGFloat)arg1 layoutSize:(struct CGSize )arg2 pageRects:(id)arg3 ;
-(id)pageRects;
-(struct CGSize )layoutSize;
-(struct CGSize )sizeForPageAtIndex:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif