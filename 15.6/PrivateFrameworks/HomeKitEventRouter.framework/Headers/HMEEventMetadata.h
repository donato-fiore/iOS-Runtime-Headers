// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMEEVENTMETADATA_H
#define HMEEVENTMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMEEventMetadata : NSObject

@property (readonly) NSUInteger cachePolicy;
@property (readonly) NSUInteger combineType;
@property (readonly) CGFloat intervalSinceReferenceDate; // ivar: _intervalSinceReferenceDate
@property (readonly) NSUInteger rawCachePolicy; // ivar: _rawCachePolicy
@property (readonly) NSUInteger rawCombineType; // ivar: _rawCombineType
@property (readonly) NSUInteger rawQOS; // ivar: _rawQOS
@property (readonly, copy) NSString *source; // ivar: _source


-(id)_initWithSource:(id)arg0 rawCachePolicy:(NSUInteger)arg1 rawCombineType:(NSUInteger)arg2 rawQos:(NSUInteger)arg3 timestamp:(CGFloat)arg4 ;
-(id)initDefaultMetadata;
-(id)initWithSource:(id)arg0 cachePolicy:(NSUInteger)arg1 combineType:(NSUInteger)arg2 timestamp:(CGFloat)arg3 ;


@end


#endif