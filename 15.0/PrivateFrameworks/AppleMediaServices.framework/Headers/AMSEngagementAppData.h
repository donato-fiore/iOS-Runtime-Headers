// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTAPPDATA_H
#define AMSENGAGEMENTAPPDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMSEngagementAppData : NSObject

@property (retain, nonatomic) NSArray *cachedResponses; // ivar: _cachedResponses
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *whitelist; // ivar: _whitelist


-(id)exportObject;
-(id)initWithIdentifier:(id)arg0 cacheObject:(id)arg1 ;


@end


#endif