// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSOFTWAREUPDATEDOCUMENTATIONASSET_H
#define HMSOFTWAREUPDATEDOCUMENTATIONASSET_H

@class HMFObject, NSURL, NSInputStream, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, NSSecureCoding, HMSoftwareUpdateUrlSessionDelegate, HMSoftwareUpdateDocumentationAssetExtractorDelegate, OS_dispatch_queue, HMSoftwareUpdateUrlSession, HMSoftwareUpdateDocumentationAssetDelegate, HMSoftwareUpdateDocumentationAssetExtractor;


#import "HMSoftwareUpdateDocumentation.h"
#import "HMSoftwareUpdateDocumentationMetadata.h"

@interface HMSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMSoftwareUpdateUrlSessionDelegate, HMSoftwareUpdateDocumentationAssetExtractorDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSURL *URL;
@property (retain, nonatomic) NSObject<HMSoftwareUpdateUrlSession> *URLSession; // ivar: _URLSession
@property (retain, nonatomic) NSInputStream *archivedFileStream; // ivar: _archivedFileStream
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSoftwareUpdateDocumentationAssetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (retain, nonatomic) NSObject<HMSoftwareUpdateDocumentationAssetExtractor> *extractor; // ivar: _extractor
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata; // ivar: _metadata
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) BOOL shouldAutomaticallyCache; // ivar: _shouldAutomaticallyCache
@property (readonly) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)assetWithURL:(id)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentationMetadata:(id)arg0 ;
-(id)initWithDocumentationMetadata:(id)arg0 urlSession:(id)arg1 extractor:(id)arg2 ;
-(id)logIdentifier;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)cancelDownload;
-(void)cancelUnarchive;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishDownload;
-(void)finishUnarchive;
-(void)setExtractionProgress:(CGFloat)arg0 ;
-(void)startCaching;
-(void)startDownload;
-(void)startUnarchive;


@end


#endif