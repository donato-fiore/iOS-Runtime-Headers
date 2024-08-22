// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMMATCHINGSPAN_H
#define CDMMATCHINGSPAN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CDMSpanValue.h"

@interface CDMMatchingSpan : NSObject

@property (readonly, nonatomic) NSInteger endCharIndex; // ivar: _endCharIndex
@property (readonly, nonatomic) NSInteger endTokenIndex; // ivar: _endTokenIndex
@property (readonly, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSInteger startCharIndex; // ivar: _startCharIndex
@property (readonly, nonatomic) NSInteger startTokenIndex; // ivar: _startTokenIndex
@property (readonly, nonatomic) CDMSpanValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithLabel:(id)arg0 input:(id)arg1 value:(id)arg2 startCharIndex:(NSInteger)arg3 endCharIndex:(NSInteger)arg4 startTokenIndex:(NSInteger)arg5 endTokenIndex:(NSInteger)arg6 ;
-(id)toDictionary;


@end


#endif