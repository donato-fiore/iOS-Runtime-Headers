// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSETDIFFARTIFACT_H
#define TRIASSETDIFFARTIFACT_H

@class NSString<TRIAssetId>, NSURL, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIAssetDiffArtifact : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIAssetId> *destAssetId; // ivar: _destAssetId
@property (readonly, nonatomic) NSURL *diff; // ivar: _diff
@property (readonly, nonatomic) NSString *diffSignature; // ivar: _diffSignature
@property (readonly, nonatomic) NSInteger diffSize; // ivar: _diffSize
@property (readonly, nonatomic) NSData *publicCertificate; // ivar: _publicCertificate
@property (readonly, nonatomic) NSString<TRIAssetId> *sourceAssetId; // ivar: _sourceAssetId


+(BOOL)_signature:(id)arg0 onFileURL:(id)arg1 fromCloudKitRecordId:(id)arg2 isValidUsingPublicCertificate:(id)arg3 ;
+(id)artifactFromCKRecord:(id)arg0 ;
+(id)artifactWithSourceAssetId:(id)arg0 destAssetId:(id)arg1 diffSignature:(id)arg2 diff:(id)arg3 diffSize:(NSInteger)arg4 publicCertificate:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArtifact:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDestAssetId:(id)arg0 ;
-(id)copyWithReplacementDiff:(id)arg0 ;
-(id)copyWithReplacementDiffSignature:(id)arg0 ;
-(id)copyWithReplacementDiffSize:(NSInteger)arg0 ;
-(id)copyWithReplacementPublicCertificate:(id)arg0 ;
-(id)copyWithReplacementSourceAssetId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSourceAssetId:(id)arg0 destAssetId:(id)arg1 diffSignature:(id)arg2 diff:(id)arg3 diffSize:(NSInteger)arg4 publicCertificate:(id)arg5 ;


@end


#endif