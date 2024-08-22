// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKCFGPARSECONTEXT_H
#define _HKCFGPARSECONTEXT_H

@class NSScanner;

#import <Foundation/Foundation.h>

#import "_HKCFGNodeCache.h"

@interface _HKCFGParseContext : NSObject

@property (readonly, nonatomic) _HKCFGNodeCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSUInteger lengthAllowance; // ivar: _lengthAllowance
@property (readonly, nonatomic) NSUInteger recursiveDepth; // ivar: _recursiveDepth
@property (readonly, nonatomic) NSScanner *scanner; // ivar: _scanner


-(id)initWithScanner:(id)arg0 lengthAllowance:(NSUInteger)arg1 ;
-(void)decreaseLengthAllowance:(NSUInteger)arg0 ;
-(void)decrementRecursiveDepth;
-(void)increaseLengthAllowance:(NSUInteger)arg0 ;
-(void)incrementRecursiveDepth;


@end


#endif