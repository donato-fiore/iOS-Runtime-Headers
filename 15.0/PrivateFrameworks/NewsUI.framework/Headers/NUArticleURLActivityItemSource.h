// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEURLACTIVITYITEMSOURCE_H
#define NUARTICLEURLACTIVITYITEMSOURCE_H

@class NSURL;


#import "NUArticleActivityItemSource.h"

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSURL *articleURL; // ivar: _articleURL


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)bodyStringForMailMessage;
-(id)initWithHeadline:(id)arg0 URLModifier:(id)arg1 ;


@end


#endif