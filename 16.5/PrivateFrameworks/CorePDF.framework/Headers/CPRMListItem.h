// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPRMLISTITEM_H
#define CPRMLISTITEM_H


#import <Foundation/Foundation.h>


@interface CPRMListItem : NSObject {
    NSUInteger _count;
    NSUInteger _pos;
}


@property (readonly) *CGPDFPage page;
@property (readonly) **CGPDFNode paragraphNodes; // ivar: _paragraphs


-(id)initWithCount:(NSUInteger)arg0 ;
-(struct CGRect )bounds;
-(void)addParagraph:(struct CGPDFNode *)arg0 ;
-(void)dealloc;


@end


#endif