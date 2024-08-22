// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVPLAYACTIVITYFEEDSERIALIZATION_H
#define SSVPLAYACTIVITYFEEDSERIALIZATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSVPlayActivityFeedSerialization : NSObject

@property (copy, nonatomic) NSString *currentStoreFrontID; // ivar: _currentStoreFrontID


+(id)defaultOverrideHTTPHeaderFields;
-(id)propertyListObjectWithPlayActivityEvent:(id)arg0 ;


@end


#endif