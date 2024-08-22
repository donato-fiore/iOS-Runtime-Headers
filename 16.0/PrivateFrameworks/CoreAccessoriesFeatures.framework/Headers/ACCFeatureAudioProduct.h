// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCFEATUREAUDIOPRODUCT_H
#define ACCFEATUREAUDIOPRODUCT_H

@class NSMutableSet, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ACCFeatureAudioProduct : NSObject

@property (retain) NSMutableSet *endpoints; // ivar: _endpoints
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedManager;
-(id)_init;
-(void)_connectToACCFeatureAudioProduct;
-(void)_disconnectFromACCFeatureAudioProduct;
-(void)accessoryAttached:(id)arg0 connection:(id)arg1 ;
-(void)accessoryDetached:(id)arg0 connection:(id)arg1 ;
-(void)processAudioProductCerts:(id)arg0 forModel:(id)arg1 firstConnectionAfterPair:(BOOL)arg2 connection:(id)arg3 endpoint:(id)arg4 ;


@end


#endif