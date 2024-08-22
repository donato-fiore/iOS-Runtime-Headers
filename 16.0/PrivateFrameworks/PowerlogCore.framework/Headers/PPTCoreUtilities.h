// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTCOREUTILITIES_H
#define PPTCOREUTILITIES_H


#import <Foundation/Foundation.h>


@interface PPTCoreUtilities : NSObject



+(BOOL)isAllowedMetric:(id)arg0 ;
+(BOOL)isAllowedSubsystem:(id)arg0 category:(id)arg1 ;
+(BOOL)isValidModeForMetric:(id)arg0 ;
+(id)getAllowlist;
+(id)getPrivacyAllowlist;
+(id)getTestAllowlist;
+(id)md5Hash:(id)arg0 ;


@end


#endif