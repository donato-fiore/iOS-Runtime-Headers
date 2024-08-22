// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDREADCLIENT_H
#define _LSDREADCLIENT_H

@class LSDClient;
@protocol _LSDReadProtocol;



@interface _LSDReadClient : LSDClient <_LSDReadProtocol>





-(void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(id)arg0 ;
-(void)getBoundIconInfoForDocumentProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)getBundleProxyForCurrentProcessWithCompletionHandler:(id)arg0 ;
-(void)getBundleRecordForCoreTypesWithCompletionHandler:(id)arg0 ;
-(void)getBundleRecordForCurrentProcessWithCompletionHandler:(id)arg0 ;
-(void)getDiskUsage:(id)arg0 completionHandler:(id)arg1 ;
-(void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(id)arg0 ;
-(void)getExtensionPointRecordWithIdentifier:(id)arg0 platform:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)getKernelPackageExtensionsWithCompletionHandler:(id)arg0 ;
-(void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(id)arg0 ;
-(void)getPreferencesWithCompletionHandler:(id)arg0 ;
-(void)getRelatedTypesOfTypeWithIdentifier:(id)arg0 maximumDegreeOfSeparation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)getResourceValuesForKeys:(id)arg0 URL:(id)arg1 preferredLocalizations:(id)arg2 completionHandler:(id)arg3 ;
-(void)getServerStatusWithCompletionHandler:(id)arg0 ;
-(void)getServerStoreNonBlockingWithCompletionHandler:(id)arg0 ;
-(void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id)arg0 ;
-(void)getSettingsStoreConfigurationWithCompletionHandler:(id)arg0 ;
-(void)getSystemContentStoreWithCompletionHandler:(id)arg0 ;
-(void)getSystemModeWithCompletionHandler:(id)arg0 ;
-(void)getTypeRecordForImportedTypeWithIdentifier:(id)arg0 conformingToIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)getTypeRecordWithIdentifier:(id)arg0 allowUndeclared:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getTypeRecordWithTag:(id)arg0 ofClass:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)getTypeRecordsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getTypeRecordsWithTag:(id)arg0 ofClass:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)getWhetherTypeIdentifier:(id)arg0 conformsToTypeIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)mapBundleIdentifiers:(id)arg0 orMachOUUIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveQueries:(id)arg0 legacySPI:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)willHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;


@end


#endif