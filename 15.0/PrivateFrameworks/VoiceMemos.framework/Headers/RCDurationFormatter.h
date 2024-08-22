// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCDURATIONFORMATTER_H
#define RCDURATIONFORMATTER_H

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCDurationFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}




+(id)_localizedDateTimeFormatForDurationFormattingStyle:(NSInteger)arg0 ;
+(id)_localizedPositionalFormatStringForDurationFormattingStyle:(NSInteger)arg0 ;
+(id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg0 ;
+(id)sharedFormatter;
-(id)_hiddenComponentStringWithString:(id)arg0 ;
-(id)_onQueuePositionalFormatStringForStyle:(NSInteger)arg0 ;
-(id)_onQueueStringFromDuration:(CGFloat)arg0 byReplacingDigitsWithDigit:(NSInteger)arg1 hideComponentOptions:(NSInteger)arg2 style:(NSInteger)arg3 ;
-(id)_onQueueStringFromDuration:(CGFloat)arg0 style:(NSInteger)arg1 ;
-(id)init;
-(id)stringFromDuration:(CGFloat)arg0 hideComponentOptions:(NSInteger)arg1 style:(NSInteger)arg2 ;
-(id)stringFromDuration:(CGFloat)arg0 replacingDigitsWithDigit:(NSUInteger)arg1 style:(NSInteger)arg2 ;
-(id)stringFromDuration:(CGFloat)arg0 style:(NSInteger)arg1 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(void)reloadLocalizedFormatStrings;


@end


#endif