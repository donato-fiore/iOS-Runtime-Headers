// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEHEADERINFO_H
#define TSTTABLEHEADERINFO_H


#import <Foundation/Foundation.h>

#import "TSTCellStyle.h"
#import "TSWPParagraphStyle.h"

@interface TSTTableHeaderInfo : NSObject

@property (retain, nonatomic) TSTCellStyle *cellStyle; // ivar: mCellStyle
@property (nonatomic) unsigned char hidingState; // ivar: mHidingState
@property (nonatomic) unsigned short numberOfCells; // ivar: mNumberOfCells
@property (nonatomic) CGFloat size; // ivar: mSize
@property (retain, nonatomic) TSWPParagraphStyle *textStyle; // ivar: mTextStyle


-(id)description;
-(void)dealloc;


@end


#endif