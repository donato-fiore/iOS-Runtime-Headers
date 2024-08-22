// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIUPNEXTBUTTONPROPERTIES_H
#define VUIUPNEXTBUTTONPROPERTIES_H

@class NSString, UIView<VUIUpNextButtonProtocol>;

#import <Foundation/Foundation.h>

#import "VUIUpNextStateView.h"

@interface VUIUpNextButtonProperties : NSObject

@property (readonly, nonatomic) VUIUpNextStateView *addedStateView; // ivar: _addedStateView
@property (retain, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (nonatomic) BOOL confirmationShouldWaitCompletion; // ivar: _confirmationShouldWaitCompletion
@property (weak, nonatomic) UIView<VUIUpNextButtonProtocol> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dismissOnSelect; // ivar: _dismissOnSelect
@property (nonatomic) BOOL hasUpdated; // ivar: _hasUpdated
@property (nonatomic) BOOL isWatchListed; // ivar: _isWatchListed
@property (readonly, nonatomic) VUIUpNextStateView *removedStateView; // ivar: _removedStateView


-(id)init;
-(void)_errorInUpdatingState:(id)arg0 ;
-(void)_toggleUpNextState;
-(void)callAPIAndToggleUpNextState;
-(void)dealloc;
-(void)removeNotificationObserver;
-(void)setupNotificationObserver;
-(void)updateButtonContentView;


@end


#endif