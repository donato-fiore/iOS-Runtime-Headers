// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPAGINATEDPAGEINFO_H
#define TPPAGINATEDPAGEINFO_H

@class NSArray;
@protocol TSKModelRootIndexProvider, TPPageLayoutInfoProvider;


#import "TPPageInfo.h"
#import "TPDrawablesZOrder.h"

@interface TPPaginatedPageInfo : TPPageInfo <TSKModelRootIndexProvider>



@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (readonly, nonatomic) NSArray *floatingDrawableInfos;
@property (readonly, nonatomic) BOOL isDocumentSetupPage;
@property (readonly, weak, nonatomic) NSObject<TPPageLayoutInfoProvider> *layoutInfoProvider; // ivar: _layoutInfoProvider


+(Class)bodyInfoClass;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)modelRootIndex;
-(id)initWithPageIndex:(NSUInteger)arg0 documentRoot:(id)arg1 layoutInfoProvider:(id)arg2 ;
-(id)orderedDrawables:(id)arg0 ;
-(id)pageController;
-(struct CGRect )pageFrame;


@end


#endif