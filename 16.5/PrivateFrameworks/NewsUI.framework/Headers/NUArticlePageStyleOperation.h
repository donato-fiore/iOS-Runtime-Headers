// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUARTICLEPAGESTYLEOPERATION_H
#define NUARTICLEPAGESTYLEOPERATION_H

@class FCOperation, FCArticle;


#import "NUPageStyle.h"

@interface NUArticlePageStyleOperation : FCOperation

@property (readonly, nonatomic) FCArticle *article; // ivar: _article
@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSUInteger pageNextAction; // ivar: _pageNextAction
@property (retain, nonatomic) NUPageStyle *pageStyle; // ivar: _pageStyle


-(BOOL)validateOperation;
-(id)initWithArticle:(id)arg0 pageNextAction:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)operationDidFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif