// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAABSINTHESIGNERCONTEXTCACHE_H
#define AAABSINTHESIGNERCONTEXTCACHE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "AAAbsintheContext.h"

@interface AAAbsintheSignerContextCache : NSObject

@property (readonly, nonatomic) AAAbsintheContext *context; // ivar: _context
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate


+(id)cacheWithContext:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif