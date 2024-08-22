// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSXATTRCACHEENTRY_H
#define LIVEFSXATTRCACHEENTRY_H


#import <Foundation/Foundation.h>


@interface LiveFSXattrCacheEntry : NSObject

@property (readonly) timespec addedTime; // ivar: _addedTime
@property timespec lastUsedTime; // ivar: _lastUsedTime
@property (readonly) *void xattrBytes; // ivar: _xattrBytes
@property (readonly) NSUInteger xattrSize; // ivar: _xattrSize


-(BOOL)isExpiredAsOf:(struct timespec *)arg0 forLifetime:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 andTime:(struct timespec *)arg1 ;
-(void)dealloc;


@end


#endif