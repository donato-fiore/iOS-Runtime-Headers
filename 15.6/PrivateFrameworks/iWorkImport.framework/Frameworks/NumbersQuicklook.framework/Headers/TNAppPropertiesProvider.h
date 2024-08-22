// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNAPPPROPERTIESPROVIDER_H
#define TNAPPPROPERTIESPROVIDER_H

@class TSAApplicationPropertiesProvider, NSArray;



@interface TNAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;


-(Class)documentRootClass;
-(NSUInteger)applicationType;
-(id)appChartPropertyOverrides;
-(id)applicationDisplayName;
-(id)applicationName;
-(id)applicationTemplateVariantsForLocale:(id)arg0 ;
-(id)bladerunnerContainerIdentifier;
-(id)cloudKitContainerIdentifier;
-(id)cloudKitSyncContainerIdentifier;
-(id)documentTypeDisplayName;
-(id)documentTypeDisplayNameForSharingInvitation;
-(id)importableDocumentTypes;
-(id)nativeDocumentType;
-(id)nativeSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)templateTypeDisplayName;


@end


#endif