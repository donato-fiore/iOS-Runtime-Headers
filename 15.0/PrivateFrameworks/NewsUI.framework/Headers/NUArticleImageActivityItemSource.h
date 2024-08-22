// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEIMAGEACTIVITYITEMSOURCE_H
#define NUARTICLEIMAGEACTIVITYITEMSOURCE_H

@class UIImage;


#import "NUArticleActivityItemSource.h"

@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) UIImage *articleImage; // ivar: _articleImage


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithHeadline:(id)arg0 ;


@end


#endif