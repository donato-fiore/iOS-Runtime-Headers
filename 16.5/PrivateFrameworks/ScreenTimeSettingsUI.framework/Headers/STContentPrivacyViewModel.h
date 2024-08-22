// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCONTENTPRIVACYVIEWMODEL_H
#define STCONTENTPRIVACYVIEWMODEL_H

@class NSNumber, NSString, NSMutableDictionary, NSSet;
@protocol _TtP20ScreenTimeSettingsUI32STRestrictionsDataSourceProtocol_;

#import <Foundation/Foundation.h>

#import "STCommunicationLimits.h"

@interface STContentPrivacyViewModel : NSObject <_TtP20ScreenTimeSettingsUI32STRestrictionsDataSourceProtocol_>



@property (retain) STCommunicationLimits *communicationLimits; // ivar: _communicationLimits
@property (nonatomic) BOOL isLoaded; // ivar: _isLoaded
@property (nonatomic) BOOL isLocalDevice; // ivar: _isLocalDevice
@property (nonatomic) BOOL restrictionsEnabled; // ivar: _restrictionsEnabled
@property (nonatomic) BOOL shouldAllowEditing; // ivar: _shouldAllowEditing
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property BOOL userIsManaged; // ivar: _userIsManaged
@property BOOL userIsRemote; // ivar: _userIsRemote
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property NSUInteger userType; // ivar: _userType
@property (retain, nonatomic) NSMutableDictionary *valuesByRestriction; // ivar: _valuesByRestriction
@property (copy, nonatomic) NSSet *visibleRestrictions; // ivar: _visibleRestrictions


-(BOOL)shouldEnableRestriction:(id)arg0 ;
-(id)defaultValueForRestriction:(id)arg0 ;
-(id)defaultValueForRestrictionIdentifier:(id)arg0 ;
-(id)init;
-(id)visibleRestrictionWithConfiguration:(id)arg0 key:(id)arg1 ;


@end


#endif