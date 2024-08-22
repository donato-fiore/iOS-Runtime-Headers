// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCARTICLEMODALBRANDBARCONFIG_H
#define FCARTICLEMODALBRANDBARCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCArticleModalBrandBarConfig : NSObject

@property (readonly, nonatomic) int campaignVersion; // ivar: _campaignVersion
@property (readonly, nonatomic) NSString *ctaTitle; // ivar: _ctaTitle
@property (readonly, nonatomic) NSString *ctaUrl; // ivar: _ctaUrl
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) int maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (readonly, nonatomic) NSString *messageTitle; // ivar: _messageTitle
@property (readonly, nonatomic) NSInteger quiescenceInterval; // ivar: _quiescenceInterval


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif