// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI225AUDIOFEEDHEADLINEMETADATA_H
#define _TTC7NEWSUI225AUDIOFEEDHEADLINEMETADATA_H

@class NSDate, NSString;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI225AudioFeedHeadlineMetadata : NSObject <FCHeadlineMetadata>

 {
    ? displayDate;
    ? storyType;
    ? title;
    ? shortExcerpt;
}


@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;


-(id)init;


@end


#endif