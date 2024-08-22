// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCARTICLELINKBEHAVIORCONFIG_H
#define FCARTICLELINKBEHAVIORCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCArticleLinkBehaviorConfig : NSObject

@property (readonly, nonatomic) NSString *animationBody; // ivar: _animationBody
@property (readonly, nonatomic) int animationCampaignVersion; // ivar: _animationCampaignVersion
@property (readonly, nonatomic) int animationMaxCount; // ivar: _animationMaxCount
@property (readonly, nonatomic) NSInteger animationQuiescenceInterval; // ivar: _animationQuiescenceInterval
@property (readonly, nonatomic) NSString *animationTitleLine1; // ivar: _animationTitleLine1
@property (readonly, nonatomic) NSString *animationTitleLine2; // ivar: _animationTitleLine2
@property (readonly, nonatomic) BOOL lohAnimationCompletesInArticle; // ivar: _lohAnimationCompletesInArticle
@property (readonly, nonatomic) BOOL lohAnimationEnabled; // ivar: _lohAnimationEnabled
@property (readonly, nonatomic) BOOL openArticlesAsModals; // ivar: _openArticlesAsModals


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif