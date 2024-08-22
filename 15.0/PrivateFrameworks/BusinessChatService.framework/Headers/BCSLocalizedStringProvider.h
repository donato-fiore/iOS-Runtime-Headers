// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSLOCALIZEDSTRINGPROVIDER_H
#define BCSLOCALIZEDSTRINGPROVIDER_H

@class NSString;
@protocol BCSLocalizedStringProviding;

#import <Foundation/Foundation.h>


@interface BCSLocalizedStringProvider : NSObject <BCSLocalizedStringProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)willOpenAtDifferentDayPluralWithFormattedTime:(id)arg0 formattedDay:(id)arg1 ;
-(id)willOpenAtDifferentDaySingularWithFormattedTime:(id)arg0 formattedDay:(id)arg1 ;
-(id)willOpenAtSameDayPluralWithFormattedTime:(id)arg0 ;
-(id)willOpenAtSameDaySingularWithFormattedTime:(id)arg0 ;


@end


#endif