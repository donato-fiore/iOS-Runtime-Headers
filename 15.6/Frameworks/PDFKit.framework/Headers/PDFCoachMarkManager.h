// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFCOACHMARKMANAGER_H
#define PDFCOACHMARKMANAGER_H


#import <Foundation/Foundation.h>

#import "PDFCoachMarkManagerPrivate.h"

@interface PDFCoachMarkManager : NSObject {
    PDFCoachMarkManagerPrivate *_private;
}




-(id)_pageLayerForPage:(id)arg0 ;
-(id)initWithPDFRenderingProperties:(id)arg0 ;
-(void)_cleanCoachMarks;
-(void)createCoachMarkForPage:(id)arg0 atFrame:(struct CGRect )arg1 ;
-(void)pageLayerDidAppear:(id)arg0 ;
-(void)pageLayerWillRemove:(id)arg0 ;


@end


#endif