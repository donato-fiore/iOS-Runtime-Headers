// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFDESTINATION_H
#define PDFDESTINATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFDestinationPrivate.h"
#import "PDFPage.h"

@interface PDFDestination : NSObject <NSCopying>

 {
    PDFDestinationPrivate *_private;
}


@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) CGPoint point;
@property (nonatomic) CGFloat zoom;


-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)document;
-(id)init;
-(id)initWithDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 ;
-(id)initWithPage:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(int)type;
-(struct __CFArray *)createArrayRef;
-(void)commonInit;
-(void)dealloc;


@end


#endif