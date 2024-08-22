// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPDFTAGGERPARAGRAPHLEVELRESOLVER_H
#define TSAPDFTAGGERPARAGRAPHLEVELRESOLVER_H


#import <Foundation/Foundation.h>

#import "TSAPdfTagger.h"

@interface TSAPdfTaggerParagraphLevelResolver : NSObject

@property (readonly, weak, nonatomic) TSAPdfTagger *tagger; // ivar: _tagger


-(BOOL)paragraphInfo:(id)arg0 matchesParagraphInfo:(id)arg1 level:(int)arg2 ;
-(id)initWithTagger:(id)arg0 ;
-(int)levelOfCurrentParagraph:(*id)arg0 ;
-(int)tagType;


@end


#endif