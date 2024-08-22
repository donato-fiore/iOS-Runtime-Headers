// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8NEWSFEED36SHARINGARTICLETEXTACTIVITYITEMSOURCE_H
#define _TTC8NEWSFEED36SHARINGARTICLETEXTACTIVITYITEMSOURCE_H

@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed36SharingArticleTextActivityItemSource : NSObject <UIActivityItemSource>

 {
    ? headline;
    ? itemTitle;
}




-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;


@end


#endif