// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPLICATIONMETRICSSTORAGE_H
#define WFCOMPLICATIONMETRICSSTORAGE_H


#import <Foundation/Foundation.h>


@interface WFComplicationMetricsStorage : NSObject



+(NSUInteger)appComplicationSlotsUsed;
+(NSUInteger)shortcutComplicationSlotsUsed;
+(void)setAppComplicationSlotsUsed:(NSUInteger)arg0 ;
+(void)setShortcutComplicationSlotsUsed:(NSUInteger)arg0 ;


@end


#endif