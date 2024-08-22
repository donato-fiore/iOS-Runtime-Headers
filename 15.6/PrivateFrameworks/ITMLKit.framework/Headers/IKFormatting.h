// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKFORMATTING_H
#define IKFORMATTING_H

@class NSMutableDictionary, NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface IKFormatting : NSObject {
    NSMutableDictionary *_dateFormatters;
    os_unfair_lock_s _dateFormattersLock;
    NSMutableDictionary *_numberFormatters;
    os_unfair_lock_s _numberFormattersLock;
    NSNumberFormatter *_durationFormatter;
    NSNumberFormatter *_durationPaddedFormatter;
}




+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
+(id)sharedInstance;
-(id)formatDate:(id)arg0 format:(id)arg1 ;
-(id)formatDuration:(id)arg0 ;
-(id)formatLocalizedLocaleIdentifier:(id)arg0 ;
-(id)formatLocalizedNumber:(id)arg0 style:(id)arg1 postiveFormat:(id)arg2 negativeFormat:(id)arg3 currencyCode:(id)arg4 ;
-(id)formatNumber:(id)arg0 style:(id)arg1 postiveFormat:(id)arg2 negativeFormat:(id)arg3 ;
-(id)init;
-(id)joinComponents:(id)arg0 withASCII:(id)arg1 arabic:(id)arg2 ethiopic:(id)arg3 ideograph:(id)arg4 ;
-(id)joinComponentsWithLocalizedCommaAndSpace:(id)arg0 ;
-(id)joinComponentsWithLocalizedSemicolonAndSpace:(id)arg0 ;


@end


#endif