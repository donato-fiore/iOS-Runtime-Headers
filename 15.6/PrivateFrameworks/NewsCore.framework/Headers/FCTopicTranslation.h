// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTOPICTRANSLATION_H
#define FCTOPICTRANSLATION_H

@class NTPBArticleTopic, NSString;

#import <Foundation/Foundation.h>


@interface FCTopicTranslation : NSObject

@property (retain, nonatomic) NTPBArticleTopic *articleTopic; // ivar: _articleTopic
@property (nonatomic) BOOL isEligibleForGrouping; // ivar: _isEligibleForGrouping
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited; // ivar: _isEligibleForGroupingIfFavorited
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (retain, nonatomic) NSString *tagID; // ivar: _tagID


-(id)description;
-(id)init;
-(id)initWithLanguageBucket:(id)arg0 ;
-(id)initWithTagID:(id)arg0 ;


@end


#endif