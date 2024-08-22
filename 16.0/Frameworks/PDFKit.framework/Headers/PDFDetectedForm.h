// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFDETECTEDFORM_H
#define PDFDETECTEDFORM_H


#import <Foundation/Foundation.h>


@interface PDFDetectedForm : NSObject {
    vector<PDFDetectedFormRow, std::allocator<PDFDetectedFormRow>> _rows;
    NSUInteger _fieldCount;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly) NSInteger displayBox; // ivar: _displayBox


-(NSInteger)_classifyRect:(struct CGRect )arg0 ;
-(id)detectedFormFieldAtIndex:(NSUInteger)arg0 ;
-(id)detectedFormFieldNearestPoint:(struct CGPoint )arg0 ;
-(id)initWithPage:(id)arg0 displayBox:(NSInteger)arg1 ;
-(struct vector<const CGDisplayListEntry *, std::allocator<const CGDisplayListEntry *>> )_collectGlyphEntriesInDisplayList:(struct CGDisplayList *)arg0 medianGlyphHeight:(*CGFloat)arg1 ;
-(void)_insertFieldRect:(struct CGRect *)arg0 ofKind:(NSInteger)arg1 ;


@end


#endif