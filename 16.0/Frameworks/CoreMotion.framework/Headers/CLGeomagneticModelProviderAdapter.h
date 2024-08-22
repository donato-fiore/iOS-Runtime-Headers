// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLGEOMAGNETICMODELPROVIDERADAPTER_H
#define CLGEOMAGNETICMODELPROVIDERADAPTER_H

@class NSString;
@protocol CLGeomagneticModelProviderProtocol;


#import "CLNotifierServiceAdapter.h"

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>



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
-(id)init;
-(void)beginService;
-(void)doAsync:(id)arg0 ;
// -(void)doAsync:(id)arg0 withReply:(unk)arg1  ;
-(void)endService;
-(void)fetchGeomagneticModelData:(id)arg0 ;


@end


#endif