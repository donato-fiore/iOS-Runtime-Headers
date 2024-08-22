// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDMODELDOWNLOADER_H
#define AMDMODELDOWNLOADER_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface AMDModelDownloader : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)ensureNewVersionDirURLForModel:(id)arg0 withVersion:(short)arg1 andCreationTime:(NSInteger)arg2 ;
+(id)parseCompiledModel:(id)arg0 atLocation:(id)arg1 withVersion:(id)arg2 error:(*id)arg3 ;
+(id)parseModel:(id)arg0 atLocation:(id)arg1 withVersion:(id)arg2 withStorefrontId:(id)arg3 error:(*id)arg4 ;
+(id)parseModelWithId:(id)arg0 withStorefrontId:(id)arg1 fromArchive:(id)arg2 withBaseRecoModel:(id)arg3 ;
+(id)processColdstartBinaryDownload:(id)arg0 error:(*id)arg1 ;
+(id)processModelDownload:(id)arg0 withStorefrontID:(id)arg1 error:(*id)arg2 ;
+(id)removeOldColdstartBinaries:(id)arg0 ;
+(id)removeOldModels:(id)arg0 ;
+(id)saveMapFile:(id)arg0 ofSize:(int)arg1 isCompressed:(BOOL)arg2 inDirURL:(id)arg3 fromBuffer:(id)arg4 ;
+(void)cleanupDiskForModelDirectory:(id)arg0 withSavedVersionURL:(id)arg1 ;
+(void)deleteColdstartBinaryFromStorage:(id)arg0 forModel:(id)arg1 isVersionChange:(BOOL)arg2 error:(*id)arg3 ;
+(void)deleteModelFromStorage:(id)arg0 isVersionChange:(BOOL)arg1 error:(*id)arg2 ;
+(void)saveMinimalContentToLogicalMapForModelId:(id)arg0 fromMapData:(id)arg1 ;
+(void)unzipCompiledModel:(id)arg0 copyToDestination:(id)arg1 error:(*id)arg2 ;
+(void)validateDownloadAtLocation:(id)arg0 withModelId:(id)arg1 andVersion:(id)arg2 error:(*id)arg3 ;
-(id)downloadModel:(id)arg0 forVersion:(id)arg1 usingUrl:(id)arg2 withStorefrontId:(id)arg3 andSkipDecision:(*BOOL)arg4 error:(*id)arg5 ;
-(int)getVersionForModel:(id)arg0 ;
-(void)printJson:(id)arg0 ;


@end


#endif