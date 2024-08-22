// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLETEXTACTIVITYITEMSOURCE_H
#define NUARTICLETEXTACTIVITYITEMSOURCE_H

@class NSString;


#import "NUArticleActivityItemSource.h"

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource

@property (readonly, nonatomic) NSString *itemTitle; // ivar: _itemTitle


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithHeadline:(id)arg0 ;


@end


#endif