// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLNETWORKRESOURCEMANAGER_H
#define PFLNETWORKRESOURCEMANAGER_H

@protocol PFLNetworkHandler;

#import <Foundation/Foundation.h>


@interface PFLNetworkResourceManager : NSObject

@property (readonly, nonatomic) NSObject<PFLNetworkHandler> *networkHandler; // ivar: _networkHandler


-(id)_saveModel:(id)arg0 fromLocation:(id)arg1 ;
-(id)initWithNetworkHandler:(id)arg0 ;
-(void)fetchConfigurationWithHandler:(id)arg0 ;
-(void)handleResultsForIdentifier:(id)arg0 results:(id)arg1 completion:(id)arg2 ;
-(void)prepareModelResourceForTask:(id)arg0 modelIdentifier:(id)arg1 fromTemporaryLocation:(id)arg2 completion:(id)arg3 ;


@end


#endif