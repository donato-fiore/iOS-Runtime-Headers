// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI219MAGAZINEFEEDARTICLE_H
#define _TTC7NEWSUI219MAGAZINEFEEDARTICLE_H

@class NSDate, NSString;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI219MagazineFeedArticle : NSObject <FCHeadlineMetadata>

 {
    ? articleID;
    ? title;
    ? displayDate;
    ? storyType;
    ? shortExcerpt;
}


@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;


-(id)init;


@end


#endif