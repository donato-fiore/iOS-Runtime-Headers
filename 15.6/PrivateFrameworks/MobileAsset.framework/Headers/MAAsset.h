// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAASSET_H
#define MAASSET_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MAAsset : NSObject

@property (readonly, nonatomic) NSString *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *purpose; // ivar: _purpose
@property (readonly) NSInteger state; // ivar: _state


+(id)getLoadResultFromMessage:(id)arg0 ;
+(id)loadSync:(id)arg0 allowingDifferences:(id)arg1 error:(*id)arg2 ;
+(id)loadSync:(id)arg0 allowingDifferences:(id)arg1 withPurpose:(id)arg2 error:(*id)arg3 ;
+(id)loadSync:(id)arg0 error:(*id)arg1 ;
+(id)loadSync:(id)arg0 withPurpose:(id)arg1 error:(*id)arg2 ;
+(void)cancelCatalogDownload:(id)arg0 then:(id)arg1 ;
+(void)cancelCatalogDownload:(id)arg0 withPurpose:(id)arg1 then:(id)arg2 ;
+(void)startCatalogDownload:(id)arg0 options:(id)arg1 completionWithError:(id)arg2 ;
+(void)startCatalogDownload:(id)arg0 options:(id)arg1 then:(id)arg2 ;
+(void)startCatalogDownload:(id)arg0 then:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)nonUserInitiatedDownloadsAllowed;
-(BOOL)overrideGarbageCollectionThreshold:(NSUInteger)arg0 ;
-(BOOL)refreshState;
-(BOOL)spaceCheck:(*NSInteger)arg0 ;
-(BOOL)wasDownloadable;
-(BOOL)wasInCatalog;
-(BOOL)wasLocal;
-(BOOL)wasPreinstalled;
-(BOOL)wasPurgeable;
-(NSInteger)calculateTimeout;
-(NSInteger)cancelDownloadSync;
-(NSInteger)configDownloadSync:(id)arg0 ;
-(NSInteger)purgeSync;
-(NSUInteger)hash;
-(id)absoluteAssetId;
-(id)assetProperty:(id)arg0 ;
-(id)assetServerUrl;
-(id)createExtractor;
-(id)description;
-(id)getLocalFilePath;
-(id)getLocalFileUrl;
-(id)getLocalUrl;
-(id)hashToString:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(void)attachProgressCallBack:(id)arg0 ;
-(void)cancelDownload:(id)arg0 ;
-(void)commonAssetDownload:(id)arg0 options:(id)arg1 then:(id)arg2 ;
-(void)configDownload:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)invokeClientDownloadCompletion:(NSInteger)arg0 asset:(id)arg1 completionBlockWithError:(id)arg2 ;
-(void)invokeClientDownloadCompletionAlreadyOnQueue:(NSInteger)arg0 asset:(id)arg1 completionBlockWithError:(id)arg2 ;
-(void)logAsset;
-(void)purge:(id)arg0 ;
-(void)purgeWithError:(id)arg0 ;
-(void)startDownload:(id)arg0 ;
-(void)startDownload:(id)arg0 completionWithError:(id)arg1 ;
-(void)startDownload:(id)arg0 then:(id)arg1 ;
// -(void)startDownloadWithExtractor:(id)arg0 completion:(unk)arg1  ;
// -(void)startDownloadWithExtractor:(id)arg0 options:(unk)arg1 completion:(id)arg2  ;
// -(void)startDownloadWithExtractor:(id)arg0 options:(unk)arg1 completionWithError:(id)arg2  ;


@end


#endif