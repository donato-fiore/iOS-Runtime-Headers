// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SELECTIONRECTINFO_H
#define SELECTIONRECTINFO_H


#import <Foundation/Foundation.h>

#import "PDFSelection.h"

@interface SelectionRectInfo : NSObject {
    PDFSelection *selection;
    CGRect rect;
    CGAffineTransform transform;
}






@end


#endif