// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSPOTLIGHTWRITEBACKDISSECTORCACHEENTRY_H
#define SGSPOTLIGHTWRITEBACKDISSECTORCACHEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface SGSpotlightWritebackDissectorCacheEntry : NSObject

@property (readonly, nonatomic) NSDate *cachingDate; // ivar: _cachingDate
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)initWithCachingDate:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif