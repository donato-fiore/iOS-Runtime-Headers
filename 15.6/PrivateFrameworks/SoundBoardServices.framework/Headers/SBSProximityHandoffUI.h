// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSPROXIMITYHANDOFFUI_H
#define SBSPROXIMITYHANDOFFUI_H

@class NSXPCConnection, NSString;
@protocol SBSProximityHandoffUICallerDelegate, SBSImplementer, SBSProximityHandoffUIDelegate;

#import <Foundation/Foundation.h>


@interface SBSProximityHandoffUI : NSObject <SBSProximityHandoffUICallerDelegate>

 {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> *_sbProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSProximityHandoffUIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)complete;
-(void)dealloc;
-(void)handoffCancelled;
-(void)handoffCompleted;
-(void)handoffInactive;
-(void)handoffStarted;
-(void)handoffUpdating;
-(void)start;
-(void)updateIntensity:(float)arg0 ;


@end


#endif