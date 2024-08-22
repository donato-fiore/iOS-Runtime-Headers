// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUPAGINGENGINE_H
#define NUPAGINGENGINE_H

@class NSString;
@protocol NUPagingFactory;

#import <Foundation/Foundation.h>

#import "NUArticlePageFactory.h"

@interface NUPagingEngine : NSObject <NUPagingFactory>



@property (readonly, nonatomic) NUArticlePageFactory *articlePageFactory; // ivar: _articlePageFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createPagingForArticleIDs:(id)arg0 ;
-(id)initWithArticlePageFactory:(id)arg0 ;
-(id)paging:(id)arg0 byAddingPage:(id)arg1 afterPage:(id)arg2 ;
-(id)paging:(id)arg0 byRemovingPage:(id)arg1 ;


@end


#endif