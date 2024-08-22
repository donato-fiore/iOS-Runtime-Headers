// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMAASSETMETADATA_H
#define TRIMAASSETMETADATA_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIMAAssetMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly, nonatomic) NSString *namespaceNameForEncryptionKey; // ivar: _namespaceNameForEncryptionKey


+(id)metadataWithDownloadSize:(NSUInteger)arg0 namespaceNameForEncryptionKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDownloadSize:(NSUInteger)arg0 ;
-(id)copyWithReplacementNamespaceNameForEncryptionKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDownloadSize:(NSUInteger)arg0 namespaceNameForEncryptionKey:(id)arg1 ;


@end


#endif