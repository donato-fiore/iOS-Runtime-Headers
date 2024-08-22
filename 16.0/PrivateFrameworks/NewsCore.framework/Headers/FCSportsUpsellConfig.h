// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSPORTSUPSELLCONFIG_H
#define FCSPORTSUPSELLCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCSportsUpsellConfig : NSObject

@property (nonatomic) NSInteger engagedUserQuiescenceInterval; // ivar: _engagedUserQuiescenceInterval
@property (nonatomic) NSString *landingPageArticleID; // ivar: _landingPageArticleID
@property (nonatomic) NSInteger maxNumberOfPresentations; // ivar: _maxNumberOfPresentations
@property (nonatomic) NSInteger maxNumberOfTopics; // ivar: _maxNumberOfTopics
@property (nonatomic) NSInteger minNumberOfArticlesRead; // ivar: _minNumberOfArticlesRead
@property (nonatomic) NSInteger quiescenceInterval; // ivar: _quiescenceInterval


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif