// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPROXIMITYHANDOFFUI_H
#define SBSPROXIMITYHANDOFFUI_H

@class NSString;
@protocol SBSProximityHandoffUICallerDelegate, SBSProximityHandoffUIDelegate, SBSProximityHandoffUIImplementer;

#import <Foundation/Foundation.h>


@interface SBSProximityHandoffUI : NSObject <SBSProximityHandoffUICallerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSProximityHandoffUIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBSProximityHandoffUIImplementer> *sbProxy; // ivar: _sbProxy
@property (readonly) Class superclass;


-(id)init;
-(id)initWithProxy:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)complete;
-(void)handoffCancelled;
-(void)handoffCompleted;
-(void)handoffInactive;
-(void)handoffStarted;
-(void)handoffUpdating;
-(void)start;
-(void)updateIntensity:(float)arg0 ;


@end


#endif