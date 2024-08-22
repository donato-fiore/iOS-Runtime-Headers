// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPDFTAGGERLISTPARAGRAPHLEVELRESOLVER_H
#define TSAPDFTAGGERLISTPARAGRAPHLEVELRESOLVER_H



#import "TSAPdfTaggerParagraphLevelResolver.h"

@interface TSAPdfTaggerListParagraphLevelResolver : TSAPdfTaggerParagraphLevelResolver



-(BOOL)paragraphInfo:(id)arg0 matchesParagraphInfo:(id)arg1 level:(int)arg2 ;
-(int)levelOfCurrentParagraph:(*id)arg0 ;
-(int)tagType;


@end


#endif