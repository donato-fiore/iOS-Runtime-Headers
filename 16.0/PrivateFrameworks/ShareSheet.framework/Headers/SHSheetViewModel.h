// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETVIEWMODEL_H
#define SHSHEETVIEWMODEL_H

@class NSArray, NSDictionary, SLCollaborationFooterViewModel, UIColor, NSAttributedString, NSString, UIViewController, NSNumber;
@protocol SHSheetContentViewModel, SHSheetViewModelInterface, SHSheetSession;

#import <Foundation/Foundation.h>


@interface SHSheetViewModel : NSObject <SHSheetContentViewModel, SHSheetViewModelInterface>



@property (copy, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (copy, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (retain, nonatomic) SLCollaborationFooterViewModel *collaborationFooterViewModel; // ivar: _collaborationFooterViewModel
@property (retain, nonatomic) UIColor *customHeaderButtonColor; // ivar: _customHeaderButtonColor
@property (copy, nonatomic) NSAttributedString *customHeaderButtonTitle; // ivar: _customHeaderButtonTitle
@property (copy, nonatomic) NSString *customOptionsTitle; // ivar: _customOptionsTitle
@property (retain, nonatomic) UIViewController *customViewController; // ivar: _customViewController
@property (retain, nonatomic) NSNumber *customViewControllerVerticalInsetWrapper; // ivar: _customViewControllerVerticalInsetWrapper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) BOOL isSharingExpanded; // ivar: _isSharingExpanded
@property (copy, nonatomic) NSArray *metadataValues; // ivar: _metadataValues
@property (retain, nonatomic) NSNumber *nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (copy, nonatomic) NSArray *peopleSuggestionProxies; // ivar: _peopleSuggestionProxies
@property (copy, nonatomic) NSArray *peopleSuggestions; // ivar: _peopleSuggestions
@property (nonatomic) BOOL reloadData; // ivar: _reloadData
@property (copy, nonatomic) NSArray *restrictedActivityTypes; // ivar: _restrictedActivityTypes
@property (readonly, nonatomic) NSObject<SHSheetSession> *session; // ivar: _session
@property (copy, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (nonatomic) BOOL showCustomHeaderButton; // ivar: _showCustomHeaderButton
@property (nonatomic) BOOL showOptions; // ivar: _showOptions
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCollaboration; // ivar: _supportsCollaboration
@property (nonatomic) BOOL supportsSendCopy; // ivar: _supportsSendCopy
@property (nonatomic) BOOL updateProxiesWithAnimation; // ivar: _updateProxiesWithAnimation
@property (copy, nonatomic) NSArray *urlRequests; // ivar: _urlRequests


-(id)_customHeaderButtonColorWithSession:(id)arg0 ;
-(id)_customHeaderButtonTitleWithSession:(id)arg0 ;
-(id)activityForActivityProxyIdentifier:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;


@end


#endif