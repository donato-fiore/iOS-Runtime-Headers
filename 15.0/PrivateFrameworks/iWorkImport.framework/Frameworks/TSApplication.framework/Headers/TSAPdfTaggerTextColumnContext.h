// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPDFTAGGERTEXTCOLUMNCONTEXT_H
#define TSAPDFTAGGERTEXTCOLUMNCONTEXT_H

@class TSWPColumn, TSWPSelection;


#import "TSAPdfTaggerContext.h"
#import "TSAPdfTaggerTextColumnOwnerContext.h"

@interface TSAPdfTaggerTextColumnContext : TSAPdfTaggerContext {
    TSWPParagraphEnumerator _paragraphEnumerator;
}


@property (readonly, weak, nonatomic) TSWPColumn *column; // ivar: _column
@property (readonly, weak, nonatomic) TSWPSelection *limitSelection; // ivar: _limitSelection
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, weak, nonatomic) TSAPdfTaggerTextColumnOwnerContext *textColumnOwner; // ivar: _textColumnOwner


-(id)initWithStateOfTagger:(id)arg0 column:(id)arg1 limitSelection:(id)arg2 ;
-(struct TSWPParagraphEnumerator *)paragraphEnumerator;


@end


#endif