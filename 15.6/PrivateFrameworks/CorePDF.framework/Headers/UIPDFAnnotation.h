// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPDFANNOTATION_H
#define UIPDFANNOTATION_H

@class NSString, NSMutableArray, CALayer;

#import <Foundation/Foundation.h>

#import "UIPDFSelection.h"
#import "UIPDFAnnotationController.h"
#import "UIPDFAnnotationView.h"
#import "UIPDFPage.h"
#import "UIPDFPopupAnnotation.h"

@interface UIPDFAnnotation : NSObject {
    *CGPDFDictionary _dictionary;
    *CGColor _color;
    *void _appearanceStream;
    *CGPDFString _pdfContents;
    NSString *_annotationID;
    BOOL _hidden;
    NSMutableArray *_quadPoints;
    UIPDFSelection *_selection;
}


@property (nonatomic) UIPDFAnnotationController *annotationController; // ivar: _annotationController
@property (retain, nonatomic) UIPDFAnnotationView *annotationView; // ivar: _annotationView
@property (retain, nonatomic) NSString *associatedAnnotationID; // ivar: _associatedAnnotationID
@property (retain, nonatomic) NSString *contents; // ivar: _contents
@property (retain, nonatomic) id *data; // ivar: data
@property (retain, nonatomic) CALayer *drawingLayer; // ivar: _drawingLayer
@property (nonatomic) BOOL editable; // ivar: editable
@property (nonatomic) NSInteger index; // ivar: _index
@property (nonatomic) UIPDFPage *page; // ivar: _page
@property (nonatomic) UIPDFPopupAnnotation *popup; // ivar: _popup
@property (readonly, nonatomic) BOOL recognizeGestures;
@property (nonatomic) UIPDFSelection *selection;
@property (nonatomic) NSUInteger tag; // ivar: _tag


+(id)newAnnotationWithPage:(id)arg0 fromArchive:(id)arg1 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)hasPopUp;
-(BOOL)hidden;
-(Class)viewClass;
-(char *)pdfContents;
-(id)annotationID;
-(id)archive;
-(id)descriptionHOLD;
-(id)getImageNamed:(id)arg0 ofType:(id)arg1 ;
-(id)init;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 ;
-(id)newSelection;
-(int)annotationType;
-(struct CGColor *)color;
-(struct CGPath *)newPathFromQuadPoints;
-(struct CGRect )Rect;
-(struct CGRect )bounds;
-(struct CGRect )frame;
-(struct CGRect )popUpAnnotationRect;
-(struct CGRect )rectIn:(struct CGPDFArray *)arg0 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)makeQuadpointsFrom:(id)arg0 ;
-(void)setAnnotationID:(id)arg0 ;
-(void)setColor:(struct CGColor *)arg0 ;


@end


#endif