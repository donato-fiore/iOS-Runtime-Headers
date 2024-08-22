// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTAPPDATA_H
#define AMSENGAGEMENTAPPDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMSEngagementAppData : NSObject

@property (retain, nonatomic) NSArray *cachedResponses; // ivar: _cachedResponses
@property (retain, nonatomic) NSArray *eventFilters; // ivar: _eventFilters
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)exportObject;
-(id)initWithIdentifier:(id)arg0 cacheObject:(id)arg1 ;


@end


#endif