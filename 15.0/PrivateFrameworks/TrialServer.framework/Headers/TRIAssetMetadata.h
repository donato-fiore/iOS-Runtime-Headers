// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSETMETADATA_H
#define TRIASSETMETADATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRITreatmentQualifiedAssetIndex.h"

@interface TRIAssetMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger compressionMode; // ivar: _compressionMode
@property (readonly, nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly, nonatomic) NSString *namespaceNameForEncryptionKey; // ivar: _namespaceNameForEncryptionKey
@property (readonly, nonatomic) TRITreatmentQualifiedAssetIndex *treatmentIndex; // ivar: _treatmentIndex
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)metadataWithType:(unsigned char)arg0 namespaceNameForEncryptionKey:(id)arg1 treatmentIndex:(id)arg2 downloadSize:(NSUInteger)arg3 compressionMode:(NSUInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCompressionMode:(NSUInteger)arg0 ;
-(id)copyWithReplacementDownloadSize:(NSUInteger)arg0 ;
-(id)copyWithReplacementNamespaceNameForEncryptionKey:(id)arg0 ;
-(id)copyWithReplacementTreatmentIndex:(id)arg0 ;
-(id)copyWithReplacementType:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(unsigned char)arg0 namespaceNameForEncryptionKey:(id)arg1 treatmentIndex:(id)arg2 downloadSize:(NSUInteger)arg3 compressionMode:(NSUInteger)arg4 ;


@end


#endif