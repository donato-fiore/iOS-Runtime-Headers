// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPRMHEADING_H
#define CPRMHEADING_H


#import <Foundation/Foundation.h>


@interface CPRMHeading : NSObject {
    *CGPDFNode _node;
    *CGPDFPage _page;
}


@property (readonly) *CGPDFPage page;
@property ? textRange; // ivar: _textRange


-(id)initWithNode:(struct CGPDFNode *)arg0 onPage:(struct CGPDFPage *)arg1 ;
-(struct CGRect )bounds;


@end


#endif