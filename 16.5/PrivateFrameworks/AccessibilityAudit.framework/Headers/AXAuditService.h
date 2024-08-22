// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITSERVICE_H
#define AXAUDITSERVICE_H

@class DTXConnection, NSString;
@protocol AXAuditAPIDevice1, AXAuditerDelegate, AXAuditDeviceSettingsManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXAuditer.h"
#import "AXAuditDeviceSettingsManager.h"

@interface AXAuditService : NSObject <AXAuditAPIDevice1, AXAuditerDelegate, AXAuditDeviceSettingsManagerDelegate>



@property (copy) id *_channelRestrictBlock; // ivar: __channelRestrictBlock
@property (nonatomic) BOOL applicationStateNotificationsEnabled; // ivar: _applicationStateNotificationsEnabled
@property (readonly, nonatomic) DTXConnection *connection; // ivar: _connection
@property (retain, nonatomic) AXAuditer *currentAuditer; // ivar: _currentAuditer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXAuditDeviceSettingsManager *deviceSettingsManager; // ivar: _deviceSettingsManager
@property (readonly) NSUInteger hash;
@property NSInteger hostAPIVersion; // ivar: _hostAPIVersion
@property (nonatomic) NSUInteger monitoredEventType; // ivar: _monitoredEventType
@property (nonatomic) BOOL runningAudit; // ivar: _runningAudit
@property (readonly) Class superclass;
@property (nonatomic) int targetPid; // ivar: _targetPid


-(id)auditCaseIDsForAuditGroup:(id)arg0 ;
-(id)deviceAccessibilitySettings;
-(id)deviceAllAuditCaseIDs;
-(id)deviceAllSupportedAuditTypes;
-(id)deviceApiVersion;
-(id)deviceAuditIssueSupportedKeys;
-(id)deviceCapabilities;
-(id)deviceCaptureScreenshot;
-(id)deviceCurrentState;
-(id)deviceElement:(id)arg0 performAction:(id)arg1 withValue:(id)arg2 ;
-(id)deviceElement:(id)arg0 valueForAttribute:(id)arg1 ;
-(id)deviceElement:(id)arg0 valueForParameterizedAttribute:(id)arg1 withObject:(id)arg2 ;
-(id)deviceFetchElementAtNormalizedDeviceCoordinate:(id)arg0 ;
-(id)deviceFetchResolvesElementsOnSimulator;
-(id)deviceFetchSpecialElement:(id)arg0 ;
-(id)deviceHumanReadableDescriptionForAuditCaseID:(id)arg0 ;
-(id)deviceInspectorCanNavWhileMonitoringEvents;
-(id)deviceInspectorSupportedEventType;
-(id)deviceInspectorSupportedEventTypes;
-(id)deviceInspectorSupportsAutodrillIntoElements;
-(id)deviceInspectorSupportsIgnoredElements;
-(id)deviceRunningApplications;
-(id)fetchScreenshot;
-(id)initWithTransport:(id)arg0 ;
-(id)synchronousDeviceCaptureScreenshot;
-(void)auditCategorySetup;
-(void)auditer:(id)arg0 didAppendLogWithMessage:(id)arg1 ;
-(void)auditer:(id)arg0 didCompleteWithResults:(id)arg1 ;
-(void)auditer:(id)arg0 didEncounterIssue:(id)arg1 ;
-(void)axAuditDeviceManager:(id)arg0 settingDidChange:(id)arg1 ;
-(void)cancel;
-(void)deviceBailWithMessage:(id)arg0 ;
-(void)deviceBeginAuditCaseIDs:(id)arg0 ;
-(void)deviceBeginAuditTypes:(id)arg0 ;
-(void)deviceDidGetTargeted;
-(void)deviceElement:(id)arg0 setValue:(id)arg1 attribute:(id)arg2 ;
-(void)deviceEnableHighlight:(id)arg0 ;
-(void)deviceHighlightIssue:(id)arg0 ;
-(void)deviceHighlightIssues:(id)arg0 ;
-(void)deviceInspectorAutodrillIntoElements:(id)arg0 ;
-(void)deviceInspectorEnable:(id)arg0 ;
-(void)deviceInspectorFocusOnElement:(id)arg0 ;
-(void)deviceInspectorInformCurrentCursorPosition:(id)arg0 ;
-(void)deviceInspectorLockOnCurrentElement;
-(void)deviceInspectorMoveWithOptions:(id)arg0 ;
-(void)deviceInspectorPreviewOnElement:(id)arg0 ;
-(void)deviceInspectorSetMonitoredEventType:(id)arg0 ;
-(void)deviceInspectorShowIgnoredElements:(id)arg0 ;
-(void)deviceInspectorShowVisuals:(id)arg0 ;
-(void)devicePerformFinalCleanup;
-(void)deviceResetToDefaultAccessibilitySettings;
-(void)deviceSetAppMonitoringEnabled:(id)arg0 ;
-(void)deviceSetAuditTargetPid:(id)arg0 ;
-(void)deviceSetAuditUIPid:(id)arg0 ;
-(void)deviceUpdateAccessibilitySetting:(id)arg0 withValue:(id)arg1 ;
-(void)highlightElement:(id)arg0 ;
-(void)highlightElements:(id)arg0 ;
-(void)requestHostAPIVersion;
-(void)restrictChannelsWithBlock:(id)arg0 ;
-(void)resume;
-(void)setMaxConnectionEnqueue:(NSUInteger)arg0 ;


@end


#endif