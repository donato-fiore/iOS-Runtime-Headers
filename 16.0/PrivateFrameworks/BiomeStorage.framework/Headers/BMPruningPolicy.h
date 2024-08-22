// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPRUNINGPOLICY_H
#define BMPRUNINGPOLICY_H


#import <Foundation/Foundation.h>


@interface BMPruningPolicy : NSObject

@property (nonatomic) BOOL filterByAgeOnRead; // ivar: _filterByAgeOnRead
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (nonatomic) NSUInteger maxEventCount; // ivar: _maxEventCount
@property (nonatomic) NSUInteger maxStreamSize; // ivar: _maxStreamSize
@property (nonatomic) BOOL pruneOnAccess; // ivar: _pruneOnAccess


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initPruneOnAccess:(BOOL)arg0 filterByAgeOnRead:(BOOL)arg1 maxAge:(CGFloat)arg2 maxStreamSize:(NSUInteger)arg3 ;
-(id)initPruneOnAccess:(BOOL)arg0 filterByAgeOnRead:(BOOL)arg1 maxAge:(CGFloat)arg2 maxStreamSize:(NSUInteger)arg3 maxEventCount:(NSUInteger)arg4 ;


@end


#endif