// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WXPARAGRAPH_H
#define WXPARAGRAPH_H


#import <Foundation/Foundation.h>


@interface WXParagraph : NSObject



+(?)readAnnotationFrom:(?)arg0 paragraphNamespace:(?)arg1 tostate;
+(?)readFrom:(?)arg0 baseStyle:(?)arg1 tostate;
+(?)readRFrom:(?)arg0 to:(?)arg1 targetRunstate;
+(?)readRunsFrom:(?)arg0 paragraphNamespace:(?)arg1 to:(?)arg2 targetRunstate;
+(?)readSimpleFieldFrom:(?)arg0 paragraphNamespace:(?)arg1 tostate;
+(?)readTrackingFrom:(?)arg0 paragraphNamespace:(?)arg1 tostate;
+(void)readFromString:(id)arg0 to:(id)arg1 ;
+(void)readRunsTo:(id)arg0 state:(id)arg1 ;


@end


#endif