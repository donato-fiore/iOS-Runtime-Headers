// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTMUTABLETARGETSTATE_H
#define BLSHBACKLIGHTMUTABLETARGETSTATE_H

@class NSString;
@protocol BLSHBacklightTransitionStateMachineState;

#import <Foundation/Foundation.h>

#import "BLSHBacklightEnvironmentPresentation.h"

@interface BLSHBacklightMutableTargetState : NSObject <BLSHBacklightTransitionStateMachineState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (retain) BLSHBacklightEnvironmentPresentation *presentation; // ivar: _presentation
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)initWithState:(id)arg0 ;
-(void)setToState:(id)arg0 ;


@end


#endif