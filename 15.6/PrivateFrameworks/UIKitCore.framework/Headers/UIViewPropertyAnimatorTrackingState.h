// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWPROPERTYANIMATORTRACKINGSTATE_H
#define UIVIEWPROPERTYANIMATORTRACKINGSTATE_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface UIViewPropertyAnimatorTrackingState : NSObject

@property (nonatomic) BOOL optimizationsEnabled; // ivar: _optimizationsEnabled
@property (nonatomic) BOOL scrubsLinearly; // ivar: _scrubsLinearly
@property (nonatomic) BOOL shouldLayoutSubviews; // ivar: _shouldLayoutSubviews
@property (nonatomic) BOOL startPaused; // ivar: _startPaused
@property (nonatomic) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)init;


@end


#endif