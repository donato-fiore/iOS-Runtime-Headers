// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTPROPERTIES_H
#define TSPDOCUMENTPROPERTIES_H

@class NSUUID, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSPDocumentRevision.h"

@interface TSPDocumentProperties : NSObject <NSCopying>

 {
    NSUUID *_shareUUID;
    NSUUID *_versionUUID;
    NSUUID *_privateUUID;
}


@property (copy, nonatomic) NSDictionary *additionalProperties; // ivar: _additionalProperties
@property (copy, nonatomic) NSUUID *documentUUID; // ivar: _documentUUID
@property (nonatomic) NSUInteger fileFormatVersion; // ivar: _fileFormatVersion
@property (copy, nonatomic) TSPDocumentRevision *revision; // ivar: _revision
@property (readonly, nonatomic) NSUUID *shareUUID;
@property (readonly, nonatomic) NSUUID *versionUUID;


+(BOOL)documentIsEncryptedAtURL:(id)arg0 ;
+(id)documentPropertiesRelativePath;
+(id)documentRevisionAtURL:(id)arg0 ;
+(id)documentUUIDAtURL:(id)arg0 ;
+(id)keychainGenericItemForDocumentUUID:(id)arg0 ;
+(id)shareIdentifierRelativePath;
-(BOOL)writeToDocumentBundleURL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)writeToDocumentURL:(id)arg0 writerBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)writeToPackageWriter:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToPropertiesURL:(id)arg0 error:(*id)arg1 ;
-(id)UUIDFromDocumentProperties:(id)arg0 key:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodedPropertyListWithError:(*id)arg0 ;
-(id)hashPrivateUUIDWithDigest:(id)arg0 ;
-(id)init;
-(id)initWithDocumentBundleURL:(id)arg0 allowMissingPropertyList:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDocumentFileURL:(id)arg0 allowMissingPropertyList:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDocumentURL:(id)arg0 allowMissingPropertyList:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDocumentURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFilePackageURL:(id)arg0 zipArchive:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithPropertiesURL:(id)arg0 error:(*id)arg1 ;
-(void)readDocumentPropertiesFromDictionary:(id)arg0 ;
-(void)updateDocumentAndShareUUID;
-(void)updateDocumentUUID;
-(void)updateVersionUUID;


@end


#endif