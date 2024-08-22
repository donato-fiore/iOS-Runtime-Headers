// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSPOTLIGHTOPERATIONRESULT_H
#define FCSPOTLIGHTOPERATIONRESULT_H

@class NSString, NSDate;
@protocol FCHeadlineProviding, FCCardStyleProviding;

#import <Foundation/Foundation.h>

#import "FCColor.h"

@interface FCSpotlightOperationResult : NSObject

@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, copy, nonatomic) NSString *ctaText; // ivar: _ctaText
@property (readonly, copy, nonatomic) NSString *eyebrowTitle; // ivar: _eyebrowTitle
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly, copy, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, copy, nonatomic) NSObject<FCCardStyleProviding> *spotlightItemDarkStyle; // ivar: _spotlightItemDarkStyle
@property (readonly, copy, nonatomic) NSObject<FCCardStyleProviding> *spotlightItemStyle; // ivar: _spotlightItemStyle
@property (readonly, copy, nonatomic) NSString *subTitleText; // ivar: _subTitleText
@property (readonly, copy, nonatomic) FCColor *titleColor; // ivar: _titleColor
@property (readonly, copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithSpotlightGroupConfig:(id)arg0 headline:(id)arg1 ;


@end


#endif