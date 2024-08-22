// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTROUNDING_H
#define PPTROUNDING_H


#import <Foundation/Foundation.h>


@interface PPTRounding : NSObject

@property (readonly) int type; // ivar: _type
@property (readonly) NSUInteger value; // ivar: _value


+(BOOL)isValidRoundingJSON:(id)arg0 ;
+(id)roundDown;
+(id)roundNearest;
+(id)roundUp;
+(id)roundingWithJSONObject:(id)arg0 ;
+(id)roundingWithProto:(id)arg0 ;
-(id)initWithType:(int)arg0 value:(NSUInteger)arg1 ;
-(id)proto;


@end


#endif