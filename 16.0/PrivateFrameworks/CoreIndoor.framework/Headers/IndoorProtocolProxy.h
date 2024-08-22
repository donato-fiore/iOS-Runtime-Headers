// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDOORPROTOCOLPROXY_H
#define INDOORPROTOCOLPROXY_H

@class NSString, NSError;
@protocol CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol;

#import <Foundation/Foundation.h>


@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLIndoorDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *shutdownReason; // ivar: _shutdownReason
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)indoorAssetDownloadProgress:(float)arg0 ;
-(void)indoorDidFailWithError:(id)arg0 ;
-(void)indoorDidShutdown:(id)arg0 ;
-(void)indoorDidUpdateToLocation:(id)arg0 fromLocation:(id)arg1 ;
-(void)indoorGivesUpWithLocation:(id)arg0 ;
-(void)indoorIsUncertainWithLocation:(id)arg0 ;


@end


#endif