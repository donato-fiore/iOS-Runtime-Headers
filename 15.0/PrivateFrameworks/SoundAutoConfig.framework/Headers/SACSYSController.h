// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACSYSCONTROLLER_H
#define SACSYSCONTROLLER_H

@class NSXPCConnection, NSString;
@protocol SACServiceSYSDelegate, SACServiceDelegate, SACSYSDelegate;

#import <Foundation/Foundation.h>


@interface SACSYSController : NSObject <SACServiceSYSDelegate>

 {
    NSXPCConnection *mServiceConnection;
    id<SACServiceDelegate> *mProxyInterface;
    id<SACServiceSYSDelegate> *mSACSYSDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SACSYSDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)handleServiceCrash;
-(void)setSYSConfig:(id)arg0 ;
-(void)startServiceConnection;


@end


#endif