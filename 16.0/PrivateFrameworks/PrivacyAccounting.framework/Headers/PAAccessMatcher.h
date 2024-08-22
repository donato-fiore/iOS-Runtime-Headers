// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSMATCHER_H
#define PAACCESSMATCHER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PAAccess.h"

@interface PAAccessMatcher : NSObject <NSCopying>



@property (readonly, nonatomic) PAAccess *access; // ivar: _access
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(id)coalescingMatcherForAccess:(id)arg0 ;
+(id)negativeAccessCacheMatcherForAccess:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccess:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif