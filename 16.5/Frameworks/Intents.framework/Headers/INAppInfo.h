// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPINFO_H
#define INAPPINFO_H

@class NSSet, NSString, NSArray, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INAppInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSSet *actionsRestrictedWhileLocked; // ivar: _actionsRestrictedWhileLocked
@property (copy, nonatomic) NSSet *actionsRestrictedWhileProtectedDataUnavailable; // ivar: _actionsRestrictedWhileProtectedDataUnavailable
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSString *companionApplicationIdentifier; // ivar: _companionApplicationIdentifier
@property (copy, nonatomic) NSArray *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (readonly, copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSSet *definedIntents; // ivar: _definedIntents
@property (copy, nonatomic) NSString *developmentRegion; // ivar: _developmentRegion
@property (nonatomic, getter=isRequiresAppLaunchPreflight) BOOL requiresAppLaunchPreflight; // ivar: _requiresAppLaunchPreflight
@property (copy, nonatomic) NSSet *supportedActions; // ivar: _supportedActions
@property (copy, nonatomic) NSSet *supportedActionsByExtensions; // ivar: _supportedActionsByExtensions
@property (copy, nonatomic) NSSet *supportedIntents; // ivar: _supportedIntents
@property (copy, nonatomic) NSSet *supportedIntentsByApp; // ivar: _supportedIntentsByApp
@property (copy, nonatomic) NSDictionary *supportedIntentsGroupedByExtensionPoints; // ivar: _supportedIntentsGroupedByExtensionPoints
@property (copy, nonatomic) NSSet *supportedMediaCategories; // ivar: _supportedMediaCategories
@property (nonatomic) BOOL supportsMultiwindow; // ivar: _supportsMultiwindow


+(BOOL)supportsSecureCoding;
+(id)_appInfoWithApplicationRecord:(id)arg0 applicationExtensionRecords:(id)arg1 userActivityTypes:(id)arg2 ;
+(id)appInfoWithAppProxy:(id)arg0 ;
+(id)appInfoWithApplicationRecord:(id)arg0 ;
+(id)appInfoWithData:(id)arg0 error:(*id)arg1 ;
+(id)appInfoWithIntent:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif