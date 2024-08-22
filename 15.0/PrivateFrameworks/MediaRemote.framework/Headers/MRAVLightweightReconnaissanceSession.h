// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVLIGHTWEIGHTRECONNAISSANCESESSION_H
#define MRAVLIGHTWEIGHTRECONNAISSANCESESSION_H


#import <Foundation/Foundation.h>


@interface MRAVLightweightReconnaissanceSession : NSObject



-(void)searchEndpointsForCompanionWithTimeout:(CGFloat)arg0 reason:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)searchEndpointsForGroupUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)searchEndpointsForLeaderOutputDeviceUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)searchEndpointsForOutputDeviceUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)searchEndpointsForRoutingContextUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)searchEndpointsForString:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
// -(void)searchEndpointsWithPredicate:(id)arg0 timeout:(unk)arg1 reason:(CGFloat)arg2 queue:(id)arg3 completion:(id)arg4  ;
-(void)searchForLogicalOutputDeviceUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)searchForOutputDeviceUID:(id)arg0 timeout:(CGFloat)arg1 reason:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;


@end


#endif