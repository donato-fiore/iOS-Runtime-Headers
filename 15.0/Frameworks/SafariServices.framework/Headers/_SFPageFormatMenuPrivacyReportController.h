// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPAGEFORMATMENUPRIVACYREPORTCONTROLLER_H
#define _SFPAGEFORMATMENUPRIVACYREPORTCONTROLLER_H

@class MCProfileConnection, UIViewController, NSString;
@protocol MCProfileConnectionObserver, _SFPageFormatMenuItemController, _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;

#import <Foundation/Foundation.h>

#import "_SFSettingsAlertItem.h"

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController>

 {
    MCProfileConnection *_profileConnection;
    UIViewController *_enableTrackerProtectionViewController;
}


@property (readonly, nonatomic) _SFSettingsAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPageFormatMenuItemControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_SFBrowserDocument> *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_presentPromptToTurnOnTrackingProtection;
-(id)initWithDocument:(id)arg0 ;
-(void)_dismissPromptIfTrackerProtectionEnabled;
-(void)_initializeManagedProfileConnection;
-(void)_presentPrivacyReport;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif