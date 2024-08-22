// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLCOMPASSDATABASEADAPTER_H
#define CLCOMPASSDATABASEADAPTER_H

@class NSString;
@protocol CLCompassDatabaseProtocol;


#import "CLNotifierServiceAdapter.h"

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>



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
-(BOOL)syncgetDoSync:(id)arg0 ;
-(BOOL)syncgetLookupBiasWithMagneticField:(struct ? )arg0 acceleration:(struct ? )arg1 bias:(struct ? *)arg2 level:(*int)arg3 noResults:(*BOOL)arg4 ;
-(id)init;
-(int)syncgetPendingSetBiasCount;
-(void)beginService;
-(void)doAsync:(id)arg0 ;
// -(void)doAsync:(id)arg0 withReply:(unk)arg1  ;
-(void)dumpDatabase:(id)arg0 onCompletion:(id)arg1 ;
-(void)endService;
-(void)getBiasWithMagneticField:(struct ? )arg0 acceleration:(struct ? )arg1 ;
-(void)setBias:(struct ? )arg0 withMagneticField:(struct ? )arg1 level:(int)arg2 magnitude:(float)arg3 inclination:(float)arg4 ;


@end


#endif