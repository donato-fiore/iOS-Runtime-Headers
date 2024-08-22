// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLECONTENTSIZEMANAGER_H
#define NUARTICLECONTENTSIZEMANAGER_H

@class NSString, FCTagSettings;
@protocol NUArticleContentSizeManager;

#import <Foundation/Foundation.h>


@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FCTagSettings *tagSettings; // ivar: _tagSettings


-(NSInteger)contentScaleForArticle:(id)arg0 ;
-(NSInteger)textSizeForContentSizeCategory:(id)arg0 ;
-(id)contentSizeCategoryForArticle:(id)arg0 ;
-(id)contentSizeCategoryForSize:(NSInteger)arg0 ;
-(id)initWithTagSettings:(id)arg0 ;
-(void)updateContentScale:(NSInteger)arg0 forArticle:(id)arg1 ;
-(void)updateContentSizeCategory:(id)arg0 forArticle:(id)arg1 ;


@end


#endif