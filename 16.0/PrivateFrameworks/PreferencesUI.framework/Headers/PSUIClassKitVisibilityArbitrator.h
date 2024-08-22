// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICLASSKITVISIBILITYARBITRATOR_H
#define PSUICLASSKITVISIBILITYARBITRATOR_H

@class CLSSettingsVisibilityController;

#import <Foundation/Foundation.h>


@interface PSUIClassKitVisibilityArbitrator : NSObject

@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController; // ivar: _visibilityController
@property (nonatomic) NSUInteger visibilityState; // ivar: _visibilityState
@property (copy, nonatomic) id *visibilityStateChangeHandler; // ivar: _visibilityStateChangeHandler


-(id)init;
-(void)dealloc;
-(void)reloadVisibilityState;
-(void)settingsVisibilityDidChange:(id)arg0 ;


@end


#endif