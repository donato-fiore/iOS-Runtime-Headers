// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEPAGE_H
#define NUARTICLEPAGE_H

@class FCArticle, UIViewController<NUPageable>, FCAsyncOnceOperation, NSString;
@protocol NUPage, NUActivityProvider, NUArticleActivityFactory, NUArticleHostViewControllerFactory, FCOperationCanceling;

#import <Foundation/Foundation.h>

#import "NUPageStyle.h"

@interface NUArticlePage : NSObject <NUPage>



@property (retain, nonatomic) NSObject<NUActivityProvider> *activityProvider; // ivar: _activityProvider
@property (readonly, nonatomic) BOOL allowNeighboringAdvertising;
@property (readonly, nonatomic) FCArticle *article; // ivar: _article
@property (readonly, nonatomic) NSObject<NUArticleActivityFactory> *articleActivityFactory; // ivar: _articleActivityFactory
@property (readonly, nonatomic) NSObject<NUArticleHostViewControllerFactory> *articleHostViewControllerFactory; // ivar: _articleHostViewControllerFactory
@property (retain, nonatomic) UIViewController<NUPageable> *articleViewController; // ivar: _articleViewController
@property (retain, nonatomic) NSObject<FCOperationCanceling> *asyncOnceCancelHandler; // ivar: _asyncOnceCancelHandler
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // ivar: _asyncOnceOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) NSUInteger pageNextAction; // ivar: _pageNextAction
@property (retain, nonatomic) NUPageStyle *pageStyle; // ivar: _pageStyle
@property (readonly) Class superclass;


-(id)asyncOnceLoadPageStyle:(id)arg0 ;
-(id)initWithArticle:(id)arg0 articleHostViewControllerFactory:(id)arg1 articleActivityFactory:(id)arg2 pageNextAction:(NSUInteger)arg3 ;
-(id)viewController;
-(void)activityProvider:(id)arg0 ;
-(void)pageStyling:(id)arg0 ;
-(void)prepare;
-(void)unprepare;


@end


#endif