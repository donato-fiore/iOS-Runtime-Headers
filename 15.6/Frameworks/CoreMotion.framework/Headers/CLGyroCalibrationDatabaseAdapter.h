// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLGYROCALIBRATIONDATABASEADAPTER_H
#define CLGYROCALIBRATIONDATABASEADAPTER_H

@class NSString;
@protocol CLGyroCalibrationDatabaseProtocol;


#import "CLNotifierServiceAdapter.h"

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg0 index:(NSUInteger)arg1 ;
+(void)performSyncOnSilo:(id)arg0 invoker:(id)arg1 ;
-(*void)adaptee;
-(BOOL)syncgetBiasFit:(struct ? *)arg0 ;
-(BOOL)syncgetDoSync:(id)arg0 ;
-(BOOL)syncgetGyroStatsWithBias:(struct ? *)arg0 slope:(struct ? *)arg1 l2Error:(struct ? *)arg2 isDynamic:(BOOL)arg3 deltaBias:(struct ? *)arg4 deltaSlope:(struct ? *)arg5 deltaError:(struct ? *)arg6 isDeltaDynamic:(BOOL)arg7 ;
-(BOOL)syncgetInsertWithBias:(struct ? *)arg0 variance:(struct ? *)arg1 temperature:(float)arg2 timestamp:(CGFloat)arg3 ;
-(BOOL)syncgetSupportsMiniCalibration;
-(BOOL)syncgetWipeDatabase;
-(CGFloat)syncgetLastMiniCalibration;
-(id)init;
-(int)syncgetMaxDynamicTemperature;
-(int)syncgetNonFactoryRoundCount;
-(int)syncgetNumTemperatures;
-(void)beginService;
-(void)doAsync:(id)arg0 ;
// -(void)doAsync:(id)arg0 withReply:(unk)arg1  ;
-(void)dumpDatabase:(id)arg0 onCompletion:(id)arg1 ;
-(void)endService;
-(void)startFactoryGYTT;


@end


#endif