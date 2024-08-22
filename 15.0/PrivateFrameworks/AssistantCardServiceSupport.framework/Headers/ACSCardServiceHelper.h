// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACSCARDSERVICEHELPER_H
#define ACSCARDSERVICEHELPER_H


#import <Foundation/Foundation.h>


@interface ACSCardServiceHelper : NSObject



+(id)formattedDateTimeStringFromDate:(id)arg0 ;
+(id)formattedDateTimeStringFromDateComponents:(id)arg0 ;
+(id)rowCardSectionFromLeadingText:(id)arg0 trailingText:(id)arg1 ;
+(void)addParameterToSection:(id)arg0 selectorStrings:(id)arg1 class:(Class)arg2 ;


@end


#endif