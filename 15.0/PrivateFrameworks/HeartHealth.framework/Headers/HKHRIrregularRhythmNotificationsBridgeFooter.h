// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHRIRREGULARRHYTHMNOTIFICATIONSBRIDGEFOOTER_H
#define HKHRIRREGULARRHYTHMNOTIFICATIONSBRIDGEFOOTER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKHRIrregularRhythmNotificationsBridgeFooter : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *linkText; // ivar: _linkText
@property (readonly, copy, nonatomic) NSString *linkURL; // ivar: _linkURL
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(id)footerWhenRemotelyDisabled;
+(id)footerWhenSeedHasExpired;
+(id)footerWhenUnavailableInOnboardedCountry;
+(id)standardFooter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithText:(id)arg0 linkText:(id)arg1 linkURL:(id)arg2 ;


@end


#endif