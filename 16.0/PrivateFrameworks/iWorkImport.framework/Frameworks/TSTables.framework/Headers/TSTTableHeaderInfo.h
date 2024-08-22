// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEHEADERINFO_H
#define TSTTABLEHEADERINFO_H

@class TSWPParagraphStyle;

#import <Foundation/Foundation.h>

#import "TSTCellStyle.h"

@interface TSTTableHeaderInfo : NSObject {
    unsigned char _hidingState;
    unsigned int _numberOfCells;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    CGFloat _size;
}




-(id)description;


@end


#endif