// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBDISPLAYMANAGER_H
#define FBDISPLAYMANAGER_H

@class FBSDisplayMonitor, FBSDisplayConfiguration;



@interface FBDisplayManager : FBSDisplayMonitor

@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;


+(id)mainConfiguration;
+(id)mainIdentity;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)postBookendConnections;
-(void)updateTransformsWithCompletion:(id)arg0 ;


@end


#endif