// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEHEADERINFO_H
#define TSTTABLEHEADERINFO_H

@class TSWPParagraphStyle;

#import <Foundation/Foundation.h>

#import "TSTCellStyle.h"

@interface TSTTableHeaderInfo : NSObject

@property (retain, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) unsigned char hidingState; // ivar: _hidingState
@property (nonatomic) unsigned int numberOfCells; // ivar: _numberOfCells
@property (nonatomic) CGFloat size; // ivar: _size
@property (retain, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle


-(id)description;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 outIndex:(*unsigned int)arg2 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 index:(unsigned int)arg2 ;
-(void)updateFromMetadata:(id)arg0 ;


@end


#endif