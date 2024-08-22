// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCLIENTINTERFACE_H
#define CDMCLIENTINTERFACE_H

@class NSError;

#import <Foundation/Foundation.h>


@interface CDMClientInterface : NSObject

@property (readonly, nonatomic) NSError *errorFromSetup; // ivar: errorFromSetup
@property (readonly, nonatomic) BOOL successFromSetup; // ivar: successFromSetup


-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)isLighthouseAPIEnabled;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(id)createNSError:(id)arg0 errorCode:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)doHandleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)doServiceCenterInitWithConfig:(id)arg0 ;
-(void)handleOverridesAssetUpdateEvent:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)setup:(id)arg0 ;
-(void)setup:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif