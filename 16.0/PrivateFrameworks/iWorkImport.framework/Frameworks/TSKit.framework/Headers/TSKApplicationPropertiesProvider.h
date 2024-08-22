// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKAPPLICATIONPROPERTIESPROVIDER_H
#define TSKAPPLICATIONPROPERTIESPROVIDER_H

@class NSString, NSData;
@protocol TSKCompatibilityDelegate;

#import <Foundation/Foundation.h>


@interface TSKApplicationPropertiesProvider : NSObject

@property (readonly, copy, nonatomic) id *appTextDefaults;
@property (readonly, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSUInteger applicationType;
@property (readonly, nonatomic) NSString *bladerunnerContainerIdentifier;
@property (readonly, nonatomic) NSString *cloudKitContainerIdentifier;
@property (readonly, nonatomic) NSString *cloudKitSyncContainerIdentifier;
@property (readonly, nonatomic) NSObject<TSKCompatibilityDelegate> *compatibilityDelegate; // ivar: _compatibilityDelegate
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (readonly, nonatomic) Class documentRootClass;
@property (readonly, nonatomic) NSString *documentTypeDisplayName;
@property (readonly, nonatomic) NSString *documentTypeDisplayNameForSharingInvitation;
@property (readonly, copy, nonatomic) NSData *iWorkTextDefaultsPassphraseVerifier;
@property (readonly, nonatomic) NSString *nativeDocumentExtension;
@property (readonly, nonatomic) NSString *nativeDocumentType;
@property (readonly, nonatomic) BOOL supportsWebVideos;
@property (readonly, nonatomic) NSString *templateTypeDisplayName;
@property (readonly, nonatomic) NSUInteger webVideoRequiredDocumentWriteVersion;


-(id)appChartPropertyOverrides;
-(id)applicationTemplateVariantsForLocale:(id)arg0 ;
-(id)initWithCompatibilityDelegate:(id)arg0 ;


@end


#endif