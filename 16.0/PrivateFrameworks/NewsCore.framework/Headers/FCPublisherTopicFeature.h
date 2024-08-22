// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPUBLISHERTOPICFEATURE_H
#define FCPUBLISHERTOPICFEATURE_H

@class NSArray, NSString;


#import "FCPersonalizationFeature.h"

@interface FCPublisherTopicFeature : FCPersonalizationFeature

@property (readonly, nonatomic) NSArray *features;
@property (retain, nonatomic) NSString *publisherTagID; // ivar: _publisherTagID
@property (retain, nonatomic) NSString *topicTagID; // ivar: _topicTagID


-(id)init;
-(id)initWithPersonalizationIdentifier:(id)arg0 ;
-(id)initWithPublisherTagID:(id)arg0 topicTagID:(id)arg1 ;


@end


#endif