// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIINAPPMESSAGESCONFIG_H
#define VUIINAPPMESSAGESCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagesConfig : NSObject

@property (nonatomic) CGFloat minimumPresentationIntervalNormal; // ivar: _minimumPresentationIntervalNormal
@property (nonatomic) CGFloat minimumPresentationIntervalRestricted; // ivar: _minimumPresentationIntervalRestricted
@property (nonatomic) CGFloat pageEventDelay; // ivar: _pageEventDelay
@property (retain, nonatomic) NSArray *whitelistedFields; // ivar: _whitelistedFields


-(id)init;


@end


#endif