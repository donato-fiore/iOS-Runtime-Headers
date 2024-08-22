// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTCADENCETUPLE_H
#define PPTCADENCETUPLE_H


#import <Foundation/Foundation.h>


@interface PPTCadenceTuple : NSObject

@property (readonly) int type; // ivar: _type
@property (readonly) NSUInteger value; // ivar: _value


+(BOOL)isValidCadenceTupleJSON:(id)arg0 ;
+(id)cadenceTupleWithJSONObject:(id)arg0 ;
-(id)initWithCadenceType:(int)arg0 value:(NSUInteger)arg1 ;


@end


#endif