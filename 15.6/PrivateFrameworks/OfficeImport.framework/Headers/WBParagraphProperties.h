// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBPARAGRAPHPROPERTIES_H
#define WBPARAGRAPHPROPERTIES_H


#import <Foundation/Foundation.h>


@interface WBParagraphProperties : NSObject



+(*void)createTrackedPropertiesIfNeeded:(id)arg0 ;
+(id)formattingChangeDate:(struct WrdDateTime *)arg0 ;
+(void)mapWordProperties:(*void)arg0 reader:(id)arg1 toProperties:(id)arg2 ;
+(void)readFrom:(id)arg0 wrdProperties:(*void)arg1 tracked:(*void)arg2 document:(id)arg3 properties:(id)arg4 ;


@end


#endif