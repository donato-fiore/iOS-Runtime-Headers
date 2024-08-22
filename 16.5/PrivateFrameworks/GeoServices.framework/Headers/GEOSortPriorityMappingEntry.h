// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSORTPRIORITYMAPPINGENTRY_H
#define GEOSORTPRIORITYMAPPINGENTRY_H


#import <Foundation/Foundation.h>


@interface GEOSortPriorityMappingEntry : NSObject

@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger resultSubtype; // ivar: _resultSubtype
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType


-(id)init;
-(id)initWithPriority:(NSInteger)arg0 resultType:(NSInteger)arg1 resultSubtype:(NSInteger)arg2 ;


@end


#endif