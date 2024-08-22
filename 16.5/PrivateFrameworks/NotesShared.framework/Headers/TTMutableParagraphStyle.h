// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTMUTABLEPARAGRAPHSTYLE_H
#define TTMUTABLEPARAGRAPHSTYLE_H



#import "TTParagraphStyle.h"
#import "TTTodo.h"

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (nonatomic) NSInteger alignment;
@property (nonatomic) NSUInteger blockQuoteLevel;
@property (nonatomic) unsigned int hints;
@property (nonatomic) NSUInteger indent;
@property (nonatomic) BOOL needsListCleanup;
@property (nonatomic) BOOL needsParagraphCleanup;
@property (nonatomic) NSUInteger startingItemNumber;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) TTTodo *todo;
@property (nonatomic) NSInteger writingDirection;


+(id)paragraphStyleNamed:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif