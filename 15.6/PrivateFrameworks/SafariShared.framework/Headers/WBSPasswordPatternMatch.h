// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDPATTERNMATCH_H
#define WBSPASSWORDPATTERNMATCH_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordPatternMatch : NSObject

@property (readonly, nonatomic) NSUInteger endIndex;
@property (readonly, nonatomic) CGFloat guessesRequired; // ivar: _guessesRequired
@property (readonly, copy, nonatomic) NSString *matchedSubstring; // ivar: _matchedSubstring
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)compactDescriptionWithMatchedStringColumnWidth:(NSUInteger)arg0 ;
-(id)description;
-(id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithType:(NSUInteger)arg0 matchedSubstring:(id)arg1 range:(struct _NSRange )arg2 guessesRequired:(CGFloat)arg3 userInfo:(id)arg4 ;


@end


#endif