// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPARAGRAPHINFO_H
#define ICPARAGRAPHINFO_H

@class NSMutableArray, TTParagraphStyle;

#import <Foundation/Foundation.h>


@interface ICParagraphInfo : NSObject

@property (readonly, nonatomic) NSUInteger blockQuoteLevel; // ivar: _blockQuoteLevel
@property (nonatomic) _NSRange characterRange; // ivar: _characterRange
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (readonly, nonatomic) NSUInteger indent;
@property (retain, nonatomic) TTParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (nonatomic) _NSRange rangeIncludingChildren; // ivar: _rangeIncludingChildren
@property (readonly, nonatomic) unsigned int style;




@end


#endif