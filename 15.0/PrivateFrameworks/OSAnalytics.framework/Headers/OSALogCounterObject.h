// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSALOGCOUNTEROBJECT_H
#define OSALOGCOUNTEROBJECT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OSALogCounterObject : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly) NSMutableDictionary *signatures; // ivar: _signatures


+(id)masterCounts;
-(id)description;
-(id)init;


@end


#endif