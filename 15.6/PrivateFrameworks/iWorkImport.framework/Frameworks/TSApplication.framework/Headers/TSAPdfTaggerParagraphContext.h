// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFTAGGERPARAGRAPHCONTEXT_H
#define TSAPDFTAGGERPARAGRAPHCONTEXT_H



#import "TSAPdfTaggerContext.h"

@interface TSAPdfTaggerParagraphContext : TSAPdfTaggerContext

@property (readonly, nonatomic) BOOL needsSpans; // ivar: _needsSpans


-(id)initWithStateOfTagger:(id)arg0 needsSpans:(BOOL)arg1 ;


@end


#endif