// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSCONNECTIONOPTIONS_H
#define SSCONNECTIONOPTIONS_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SSConnectionOptions : NSObject

@property NSInteger authMethod; // ivar: _authMethod
@property BOOL connectingToIOSdevice; // ivar: _connectingToIOSdevice
@property NSInteger controlType; // ivar: _controlType
@property (retain) NSString *deviceID; // ivar: _deviceID
@property (retain) NSString *displayName; // ivar: _displayName
@property (copy) NSDictionary *hints; // ivar: _hints
@property (retain) NSString *idsDestination; // ivar: _idsDestination
@property CGSize maxSize; // ivar: _maxSize
@property NSInteger minimumEncryptionLevel; // ivar: _minimumEncryptionLevel
@property BOOL noReconnect; // ivar: _noReconnect
@property BOOL openInFullScreen; // ivar: _openInFullScreen
@property NSInteger panningMode; // ivar: _panningMode
@property CGRect restoreContentFrame; // ivar: _restoreContentFrame
@property CGRect restoreWindowFrame; // ivar: _restoreWindowFrame
@property NSInteger screenQualityMode; // ivar: _screenQualityMode
@property NSUInteger selectedScreen; // ivar: _selectedScreen
@property NSInteger sessionSelectionAction; // ivar: _sessionSelectionAction
@property BOOL shouldCurtainScreen; // ivar: _shouldCurtainScreen
@property BOOL shouldFallbackToObserve; // ivar: _shouldFallbackToObserve
@property BOOL shouldGetUserInfo; // ivar: _shouldGetUserInfo
@property BOOL shouldReturnToAddressBox; // ivar: _shouldReturnToAddressBox
@property BOOL shouldScaleScreen; // ivar: _shouldScaleScreen
@property BOOL shouldSharePasteboard; // ivar: _shouldSharePasteboard
@property BOOL showConnectionProgress; // ivar: _showConnectionProgress
@property BOOL skipAddressPresentation; // ivar: _skipAddressPresentation
@property BOOL skipUserPassDialogIfPossible; // ivar: _skipUserPassDialogIfPossible
@property (copy) NSArray *videoEncodings; // ivar: _videoEncodings


+(id)defaultOptions;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif