// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFANNOTATIONCHANGE_H
#define PDFANNOTATIONCHANGE_H


#import <Foundation/Foundation.h>

#import "PDFAnnotationChangePrivate.h"
#import "PDFAnnotation.h"

@interface PDFAnnotationChange : NSObject {
    PDFAnnotationChangePrivate *_private;
}


@property (readonly, retain, nonatomic) PDFAnnotation *annotation;
@property (readonly, nonatomic) NSUInteger changeTimestamp;
@property (readonly, nonatomic) int changeType;


-(id)description;
-(id)initWithAddedAnnotation:(id)arg0 ;
-(id)initWithChangedAnnotation:(id)arg0 ;
-(id)initWithRemovedAnnotation:(id)arg0 ;
-(id)initWithReorderedAndChangedAnnotation:(id)arg0 ;
-(id)initWithReorderedAnnotation:(id)arg0 ;


@end


#endif