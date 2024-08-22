// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSPOTLIGHTWRITEBACKDISSECTORCACHEENTRY_H
#define PPSPOTLIGHTWRITEBACKDISSECTORCACHEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PPSpotlightWritebackDissectorCacheEntry : NSObject

@property (readonly, nonatomic) NSDate *cachingDate; // ivar: _cachingDate
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)initWithCachingDate:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif