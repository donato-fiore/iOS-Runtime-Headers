// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBTABLECELLBODYPROPERTIES_H
#define WBTABLECELLBODYPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBTableCellBodyProperties : NSObject



+(id)formattingChangeDate:(struct WrdDateTime *)arg0 ;
+(void)mapProperties:(id)arg0 toWordProperties:(*void)arg1 index:(NSUInteger)arg2 ;
+(void)mapWordProperties:(*void)arg0 toProperties:(id)arg1 index:(NSUInteger)arg2 ;
+(void)readFrom:(*void)arg0 tracked:(*void)arg1 properties:(id)arg2 index:(NSUInteger)arg3 ;
+(void)write:(id)arg0 wrdProperties:(*void)arg1 tracked:(*void)arg2 index:(NSUInteger)arg3 ;


@end


#endif