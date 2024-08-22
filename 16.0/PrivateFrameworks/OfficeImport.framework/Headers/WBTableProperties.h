// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBTABLEPROPERTIES_H
#define WBTABLEPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBTableProperties : NSObject



+(id)formattingChangeDate:(struct WrdDateTime *)arg0 ;
+(void)mapWordProperties:(*void)arg0 reader:(id)arg1 toProperties:(id)arg2 ;
+(void)readFrom:(id)arg0 wrdProperties:(*void)arg1 tracked:(*void)arg2 properties:(id)arg3 ;


@end


#endif