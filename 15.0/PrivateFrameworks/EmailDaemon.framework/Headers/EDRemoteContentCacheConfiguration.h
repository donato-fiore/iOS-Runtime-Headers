// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDREMOTECONTENTCACHECONFIGURATION_H
#define EDREMOTECONTENTCACHECONFIGURATION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface EDRemoteContentCacheConfiguration : NSObject

@property (readonly, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly, nonatomic) NSUInteger diskCapacity; // ivar: _diskCapacity


-(id)_cacheURLWithBaseURL:(id)arg0 ;
-(id)initWithBaseURL:(id)arg0 diskCapacity:(NSUInteger)arg1 ;


@end


#endif