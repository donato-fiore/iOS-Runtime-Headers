// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL12JSUSEROBJECT_H
#define _TTC19APPSTOREKITINTERNAL12JSUSEROBJECT_H

@class NSString, NSNumber;
@protocol _TtP19AppStoreKitInternalP33_5DCB8B06D2403C176A36BAD97712985119JSUserObjectExports_;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal12JSUserObject : NSObject <_TtP19AppStoreKitInternalP33_5DCB8B06D2403C176A36BAD97712985119JSUserObjectExports_>

 {
    ? accounts;
    ? onDevicePersonalizationDataManager;
    ? isFitnessAppInstallationAllowedBox;
    ? fitnessAppInstallationAllowedConditionLock;
}


@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isOnDevicePersonalizationEnabled;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;


-(id)init;
-(id)onDevicePersonalizationDataContainerForAppIds:(id)arg0 ;
-(void)queryFitnessAppInstallationAllowed;


@end


#endif