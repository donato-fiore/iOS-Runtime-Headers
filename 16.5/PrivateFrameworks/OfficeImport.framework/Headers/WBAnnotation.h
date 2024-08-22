// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBANNOTATION_H
#define WBANNOTATION_H


#import <Foundation/Foundation.h>


@interface WBAnnotation : NSObject



+(NSUInteger)findStartFrom:(id)arg0 annotation:(struct WrdAnnotation *)arg1 ;
+(id)readRangedFrom:(id)arg0 index:(unsigned int)arg1 type:(int)arg2 paragraph:(id)arg3 ;
+(void)readFrom:(id)arg0 at:(int)arg1 paragraph:(id)arg2 ;


@end


#endif