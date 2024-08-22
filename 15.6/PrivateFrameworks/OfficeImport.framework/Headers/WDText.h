// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTEXT_H
#define WDTEXT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDTableCell.h"

@interface WDText : NSObject {
    NSMutableArray *mBlocks;
    int mTextType;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument
@property (readonly, weak) WDTableCell *tableCell; // ivar: mTableCell


-(BOOL)isEmpty;
-(NSUInteger)blockCount;
-(NSUInteger)indexOfBlock:(id)arg0 ;
-(id)addParagraph;
-(id)addParagraphAtIndex:(int)arg0 ;
-(id)addTable;
-(id)addTableAtIndex:(int)arg0 ;
-(id)blockAt:(NSUInteger)arg0 ;
-(id)blockIterator;
-(id)blocks;
-(id)content;
-(id)description;
-(id)firstParagraph;
-(id)initWithDocument:(id)arg0 textType:(int)arg1 ;
-(id)initWithDocument:(id)arg0 textType:(int)arg1 tableCell:(id)arg2 ;
-(id)lastBlock;
-(id)newBlockIterator;
-(id)newRunIterator;
-(id)paragraphs;
-(id)runIterator;
-(int)tableNestingLevel;
-(int)textType;
-(void)addBlock:(id)arg0 ;
-(void)removeLastBlock;
-(void)removeLastCharacter:(unsigned short)arg0 ;


@end


#endif