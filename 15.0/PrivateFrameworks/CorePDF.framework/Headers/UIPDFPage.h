// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFPAGE_H
#define UIPDFPAGE_H

@class NSString, NSMutableArray, UIImage;

#import <Foundation/Foundation.h>

#import "UIPDFDocument.h"
#import "UIPDFSelection.h"

@interface UIPDFPage : NSObject {
    NSString *_stringInReadingOrder;
    os_unfair_lock_s _lock;
    NSMutableArray *_annotations;
}


@property (readonly) *CGPDFPage CGPage; // ivar: _cgPage
@property (readonly) CGRect cropBox;
@property (readonly) UIPDFDocument *document; // ivar: _document
@property (retain) UIImage *pageImage; // ivar: _pageImage
@property (readonly) NSUInteger pageIndex; // ivar: _pageIndex
@property (readonly) NSUInteger pageNumber; // ivar: _pageNumber
@property (retain) UIPDFSelection *selection; // ivar: _selection


-(NSUInteger)cfCompareFlagsFromNSOptions:(NSUInteger)arg0 ;
-(NSUInteger)rotation;
-(id)annotationIn:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(id)annotations;
-(id)copyPage;
-(id)findString:(id)arg0 fromSelection:(id)arg1 options:(NSUInteger)arg2 ;
-(id)getImageIfAvailable;
-(id)initWithCGPDFPage:(struct CGPDFPage *)arg0 ;
-(id)initWithDocument:(id)arg0 pageNumber:(NSUInteger)arg1 ;
-(id)string;
-(struct CGRect )mediaBox;
-(struct CGRect )mediaBoxAccountForRotation;
-(struct CGSize )size;
-(void)addAnnotation:(id)arg0 ;
-(void)clearAnnotations;
-(void)dealloc;
-(void)deliverImageWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 receiver:(id)arg2 selector:(SEL)arg3 info:(id)arg4 ;
-(void)drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)refresh;
-(void)removeAllAnnotations;
-(void)removeAnnotation:(id)arg0 ;


@end


#endif