// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAVSTROKE_H
#define OAVSTROKE_H


#import <Foundation/Foundation.h>


@interface OAVStroke : NSObject



+(char)readPresetDashStyle:(id)arg0 ;
+(id)readFromManager:(id)arg0 ;
+(id)readLineEndWithType:(id)arg0 width:(id)arg1 length:(id)arg2 ;
+(id)targetFgColorWithManager:(id)arg0 ;
+(unsigned char)readCapStyle:(id)arg0 ;
+(unsigned char)readCompoundType:(id)arg0 ;
+(unsigned char)readLineEndLength:(id)arg0 ;
+(unsigned char)readLineEndType:(id)arg0 ;
+(unsigned char)readLineEndWidth:(id)arg0 ;
+(void)initialize;
+(void)readDashStyleFromManager:(id)arg0 toStroke:(id)arg1 ;
+(void)readFillStyleFromManager:(id)arg0 toStroke:(id)arg1 ;
+(void)readJoinStyleFromManager:(id)arg0 toStroke:(id)arg1 ;


@end


#endif