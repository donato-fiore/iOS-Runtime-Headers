// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCPATTERNMATCHINGRESULT_H
#define _SWCPATTERNMATCHINGRESULT_H


#import <Foundation/Foundation.h>


@interface _SWCPatternMatchingResult : NSObject

@property (readonly, nonatomic, getter=isExcluded) BOOL excluded; // ivar: _excluded
@property (readonly, nonatomic) NSUInteger index; // ivar: _index


+(id)new;
-(id)_initWithIndex:(NSUInteger)arg0 excluded:(BOOL)arg1 ;
-(id)init;


@end


#endif