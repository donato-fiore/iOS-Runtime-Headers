// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFPOPUPANNOTATION_H
#define UIPDFPOPUPANNOTATION_H



#import "UIPDFAnnotation.h"

@interface UIPDFPopupAnnotation : UIPDFAnnotation

@property (nonatomic) CGRect adjustedBounds; // ivar: _adjustedBounds
@property (nonatomic) UIPDFAnnotation *parent; // ivar: parent


-(BOOL)recognizeGestures;
-(Class)viewClass;
-(id)init;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 ;
-(int)annotationType;
-(struct CGRect )bounds;


@end


#endif