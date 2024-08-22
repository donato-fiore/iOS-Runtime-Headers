// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TICONNECTIONSMETRICSTRACKER_H
#define TICONNECTIONSMETRICSTRACKER_H

@class PETGoalConversionEventTracker, PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface TIConnectionsMetricsTracker : NSObject

@property BOOL inputContextDidChange; // ivar: _inputContextDidChange
@property (retain, nonatomic) PETGoalConversionEventTracker *predictionEngagementTracker; // ivar: _predictionEngagementTracker
@property (retain, nonatomic) PETScalarEventTracker *textFieldEntryTracker; // ivar: _textFieldEntryTracker


+(id)sharedInstance;
-(BOOL)isIgnoredTrigger:(id)arg0 ;
-(id)init;
-(void)trackPredictionEngagmentWithConversion:(BOOL)arg0 age:(NSUInteger)arg1 fieldType:(id)arg2 resultType:(id)arg3 fromBundleId:(id)arg4 targetApp:(id)arg5 linguistic:(BOOL)arg6 semantic:(BOOL)arg7 ;
-(void)trackTextFieldEntryWithEmpty:(BOOL)arg0 fieldType:(id)arg1 linguistic:(BOOL)arg2 semantic:(BOOL)arg3 requestType:(id)arg4 ;
-(void)trackTextFieldEntryWithEmpty:(BOOL)arg0 fieldType:(id)arg1 trigger:(id)arg2 ;


@end


#endif