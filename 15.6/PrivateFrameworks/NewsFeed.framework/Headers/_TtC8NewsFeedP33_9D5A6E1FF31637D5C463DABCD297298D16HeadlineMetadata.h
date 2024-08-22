// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEEDP33_9D5A6E1FF31637D5C463DABCD297298D16HEADLINEMETADATA_H
#define _TTC8NEWSFEEDP33_9D5A6E1FF31637D5C463DABCD297298D16HEADLINEMETADATA_H

@class NSDate, NSString;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeedP33_9D5A6E1FF31637D5C463DABCD297298D16HeadlineMetadata : NSObject <FCHeadlineMetadata>

 {
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