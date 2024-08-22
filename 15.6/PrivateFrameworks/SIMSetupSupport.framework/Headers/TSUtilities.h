// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUTILITIES_H
#define TSUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSUtilities : NSObject



+(BOOL)isPad;
+(NSUInteger)odaPlans:(id)arg0 ;
+(NSUInteger)transferablePlans:(id)arg0 ;
+(id)_findPPRItem:(id)arg0 ;
+(id)backgroundColorForRemotePlan:(BOOL)arg0 ;
+(id)formattedPhoneNumber:(id)arg0 withCountryCode:(id)arg1 ;
+(id)getErrorTitleDetail:(id)arg0 forCarrier:(id)arg1 ;
+(id)preinstallPPRAlertControllerWithItems:(id)arg0 completion:(id)arg1 ;
+(id)productClass;
+(id)textColorForRemotePlan:(BOOL)arg0 ;


@end


#endif