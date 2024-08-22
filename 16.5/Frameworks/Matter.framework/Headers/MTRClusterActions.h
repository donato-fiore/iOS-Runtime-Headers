// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERACTIONS_H
#define MTRCLUSTERACTIONS_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterActions : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActionListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeEndpointListsWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeSetupURLWithParams:(id)arg0 ;
-(void)disableActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)disableActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)disableActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)disableActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enableActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enableActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enableActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enableActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)instantActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)instantActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)instantActionWithTransitionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)instantActionWithTransitionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)pauseActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)pauseActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)pauseActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)pauseActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)resumeActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)resumeActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)startActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)startActionWithDurationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)startActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)startActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stopActionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif