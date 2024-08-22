// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCULATETOKEN_H
#define CALCULATETOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UnitRanks.h"

@interface CalculateToken : NSObject

@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) UnitRanks *ranks; // ivar: _ranks
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger tokenType; // ivar: _tokenType


+(id)tokenWithType:(NSUInteger)arg0 range:(struct _NSRange )arg1 text:(id)arg2 ranks:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 range:(struct _NSRange )arg1 text:(id)arg2 ranks:(id)arg3 ;


@end


#endif