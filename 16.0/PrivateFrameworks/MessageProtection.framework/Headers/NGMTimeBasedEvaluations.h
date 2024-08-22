// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NGMTIMEBASEDEVALUATIONS_H
#define NGMTIMEBASEDEVALUATIONS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface NGMTimeBasedEvaluations : NSObject

@property (retain) NSDate *date; // ivar: _date


+(BOOL)prekeyCanBeDeleted:(id)arg0 ;
+(BOOL)prekeyShouldBeRolled:(id)arg0 ;
+(BOOL)validateFetchedPrekeyTimestamp:(CGFloat)arg0 forEvaluationType:(NSUInteger)arg1 ;
+(CGFloat)timeIntervalAllowedForAction:(NSUInteger)arg0 ;
+(id)debugDescriptionForAction:(NSUInteger)arg0 ;
+(id)nowDate;
+(id)oldestDateAllowedToSendTo;
+(id)sharedManager;
+(void)setNowDate:(id)arg0 ;


@end


#endif