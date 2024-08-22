// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPAPPPROPERTIESPROVIDER_H
#define TPAPPPROPERTIESPROVIDER_H

@class TSAApplicationPropertiesProvider, NSArray;



@interface TPAppPropertiesProvider : TSAApplicationPropertiesProvider

@property (readonly, nonatomic) NSArray *iBADocumentTypes; // ivar: _iBADocumentTypes
@property (readonly, nonatomic) NSArray *rtfDocumentTypes;
@property (readonly, nonatomic) NSArray *textDocumentTypes;
@property (readonly, nonatomic) NSArray *wordDocumentTypes;


-(BOOL)supportsTabNavigationOfCanvasObjects;
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
-(id)strokeWidthsForFreehandDrawingToolType:(NSUInteger)arg0 ;
-(id)tangierEditingFormatDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)templateTypeDisplayName;


@end


#endif