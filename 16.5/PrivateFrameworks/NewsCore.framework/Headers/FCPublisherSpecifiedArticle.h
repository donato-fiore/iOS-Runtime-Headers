// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPUBLISHERSPECIFIEDARTICLE_H
#define FCPUBLISHERSPECIFIEDARTICLE_H

@class NSString, NSDate;
@protocol FCHeadlineMetadata;

#import <Foundation/Foundation.h>


@interface FCPublisherSpecifiedArticle : NSObject <FCHeadlineMetadata>



@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *displayDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithDictionary:(id)arg0 ;


@end


#endif