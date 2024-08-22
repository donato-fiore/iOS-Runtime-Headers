// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OABSTROKE_H
#define OABSTROKE_H


#import <Foundation/Foundation.h>


@interface OABStroke : NSObject



+(char)readPresetDashStyle:(int)arg0 ;
+(id)readLineEndWithType:(int)arg0 width:(int)arg1 length:(int)arg2 ;
+(id)readStrokeFromShapeBaseManager:(id)arg0 state:(id)arg1 ;
+(int)writeCapStyle:(unsigned char)arg0 ;
+(int)writeCompoundType:(unsigned char)arg0 ;
+(int)writeLineEndLength:(unsigned char)arg0 ;
+(int)writeLineEndType:(unsigned char)arg0 ;
+(int)writeLineEndWidth:(unsigned char)arg0 ;
+(int)writePresetDashStyle:(char)arg0 ;
+(unsigned char)readCapStyle:(int)arg0 ;
+(unsigned char)readCompoundType:(int)arg0 ;
+(unsigned char)readLineEndLength:(int)arg0 ;
+(unsigned char)readLineEndType:(int)arg0 ;
+(unsigned char)readLineEndWidth:(int)arg0 ;
+(void)writePresetDashStyleForCustomDash:(id)arg0 toStroke:(struct EshStroke *)arg1 state:(id)arg2 ;


@end


#endif