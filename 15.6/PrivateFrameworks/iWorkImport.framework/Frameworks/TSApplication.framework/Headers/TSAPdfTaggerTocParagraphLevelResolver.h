// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFTAGGERTOCPARAGRAPHLEVELRESOLVER_H
#define TSAPDFTAGGERTOCPARAGRAPHLEVELRESOLVER_H



#import "TSAPdfTaggerParagraphLevelResolver.h"

@interface TSAPdfTaggerTocParagraphLevelResolver : TSAPdfTaggerParagraphLevelResolver



-(BOOL)paragraphInfo:(id)arg0 matchesParagraphInfo:(id)arg1 level:(int)arg2 ;
-(int)levelOfCurrentParagraph:(*id)arg0 ;
-(int)tagType;


@end


#endif