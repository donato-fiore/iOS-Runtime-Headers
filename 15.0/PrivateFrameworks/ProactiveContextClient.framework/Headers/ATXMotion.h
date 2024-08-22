// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMOTION_H
#define ATXMOTION_H


#import <Foundation/Foundation.h>


@interface ATXMotion : NSObject

@property (readonly, nonatomic) BOOL canPredictClipsGivenRecentMotion; // ivar: _canPredictClipsGivenRecentMotion
@property (readonly, nonatomic) NSInteger motiontype; // ivar: _motiontype
@property (readonly, nonatomic) BOOL stationary; // ivar: _stationary


+(BOOL)canPredictClipsForActivityStream:(id)arg0 ;
+(NSInteger)_getMotionTypeFromCMMotionActivity:(id)arg0 ;
+(id)_getMotionStringFromCMMotionActivity:(id)arg0 ;
+(id)findMostCommonAndRecent:(id)arg0 identityFunc:(id)arg1 ;
+(id)getMotionStringFromMotionType:(NSInteger)arg0 ;
+(id)summarizeActivityStream:(id)arg0 ;
-(id)getMotionString;
-(id)initFromCMMotionActivity:(id)arg0 ;
-(id)initFromCMMotionActivity:(id)arg0 canPredictClipsGivenRecentMotion:(BOOL)arg1 ;
-(id)initWithMotionType:(NSInteger)arg0 stationary:(BOOL)arg1 canPredictClipsGivenRecentMotion:(BOOL)arg2 ;
-(id)print;


@end


#endif