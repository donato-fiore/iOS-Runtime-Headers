// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TEXTTOKEN_H
#define TEXTTOKEN_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TextToken : NSObject

@property (readonly) NSArray *features; // ivar: _features
@property (readonly, nonatomic) NSUInteger properties; // ivar: _properties
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) NSString *string; // ivar: _string
@property (readonly) int wordID; // ivar: _wordID


-(id)initWithString:(id)arg0 score:(CGFloat)arg1 features:(id)arg2 wordID:(int)arg3 properties:(NSUInteger)arg4 ;


@end


#endif