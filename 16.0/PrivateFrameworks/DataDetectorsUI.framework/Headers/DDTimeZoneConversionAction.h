// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDTIMEZONECONVERSIONACTION_H
#define DDTIMEZONECONVERSIONACTION_H

@class NSTimeZone, NSDate;


#import "DDConversionAction.h"

@interface DDTimeZoneConversionAction : DDConversionAction {
    NSTimeZone *_tz;
    NSDate *_date;
}




+(?)actionAvailableForResult;
+(?)timeZoneFromResultdate;
-(?)initWithURL:(?)arg0 resultcontext;
-(id)_titleWithValue;
-(id)localizedName;


@end


#endif