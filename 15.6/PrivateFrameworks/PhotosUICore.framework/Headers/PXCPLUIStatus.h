// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCPLUISTATUS_H
#define PXCPLUISTATUS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXCPLUIStatus : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (retain, nonatomic) NSString *actionConfirmationAlertButtonTitle; // ivar: _actionConfirmationAlertButtonTitle
@property (retain, nonatomic) NSString *actionConfirmationAlertSubtitle; // ivar: _actionConfirmationAlertSubtitle
@property (retain, nonatomic) NSString *actionConfirmationAlertTitle; // ivar: _actionConfirmationAlertTitle
@property (retain, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (nonatomic) NSUInteger activity; // ivar: _activity
@property (retain, nonatomic) NSString *failureDescription; // ivar: _failureDescription
@property (nonatomic) BOOL hasCompletedInitialSync; // ivar: _hasCompletedInitialSync
@property (nonatomic) BOOL inResetSync; // ivar: _inResetSync
@property (nonatomic) BOOL isExiting; // ivar: _isExiting
@property (nonatomic) NSUInteger numberOfItemsFailingToUpload; // ivar: _numberOfItemsFailingToUpload
@property (nonatomic) NSUInteger numberOfOtherAssets; // ivar: _numberOfOtherAssets
@property (nonatomic) NSUInteger numberOfPhotoAssets; // ivar: _numberOfPhotoAssets
@property (nonatomic) NSUInteger numberOfVideoAssets; // ivar: _numberOfVideoAssets
@property (nonatomic) NSInteger pauseReason; // ivar: _pauseReason
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) NSString *referencedItemsDescription; // ivar: _referencedItemsDescription
@property (nonatomic) NSInteger serviceAction; // ivar: _serviceAction
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSString *stateDescription; // ivar: _stateDescription


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif