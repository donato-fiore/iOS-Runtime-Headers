// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WMLISTLEVELTEXTTOKEN_H
#define WMLISTLEVELTEXTTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CMNumberFormatter.h"

@interface WMListLevelTextToken : NSObject {
    CMNumberFormatter *_formatter;
}


@property (readonly) int level; // ivar: _level
@property (readonly) NSString *string; // ivar: _string


+(id)tokenWithString:(id)arg0 level:(int)arg1 formatter:(id)arg2 ;
-(id)initWithString:(id)arg0 level:(int)arg1 formatter:(id)arg2 ;
-(id)stringForIndex:(NSUInteger)arg0 ;


@end


#endif