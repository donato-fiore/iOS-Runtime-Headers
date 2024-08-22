// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVSYSTEMDIALOGOPTIONS_H
#define MSVSYSTEMDIALOGOPTIONS_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface MSVSystemDialogOptions : NSObject

@property (copy, nonatomic) NSString *alertHeader; // ivar: _alertHeader
@property (copy, nonatomic) NSURL *alertIconURL; // ivar: _alertIconURL
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs; // ivar: _allowedApplicationBundleIDs
@property (copy, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (copy, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (nonatomic) BOOL dismissOverlaysOnLockscreen; // ivar: _dismissOverlaysOnLockscreen
@property (nonatomic) BOOL forceModalAlertAppearance; // ivar: _forceModalAlertAppearance
@property (nonatomic) BOOL showAsTopmost; // ivar: _showAsTopmost
@property (nonatomic) BOOL showOnLockscreen; // ivar: _showOnLockscreen




@end


#endif