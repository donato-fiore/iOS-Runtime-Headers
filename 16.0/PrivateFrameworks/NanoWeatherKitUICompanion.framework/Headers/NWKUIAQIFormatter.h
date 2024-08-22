// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWKUIAQIFORMATTER_H
#define NWKUIAQIFORMATTER_H

@class NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface NWKUIAQIFormatter : NSObject {
    NSNumberFormatter *_formatter;
    os_unfair_lock_s _lock;
}




+(id)autoupdatingSharedFormatter;
-(id)formattedIndexFromAirQualityConditions:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_reloadWithLocale:(id)arg0 ;


@end


#endif