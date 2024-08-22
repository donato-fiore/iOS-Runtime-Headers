// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCLOCALVERSION_H
#define BRCLOCALVERSION_H

@class NSError, CKRecord;


#import "BRCVersion.h"
#import "BRCItemGlobalID.h"

@interface BRCLocalVersion : BRCVersion

@property (retain, nonatomic) BRCItemGlobalID *prevZoneGlobalID; // ivar: _prevZoneGlobalID
@property (retain, nonatomic) NSError *uploadError; // ivar: _uploadError
@property (retain, nonatomic) CKRecord *uploadedAssets; // ivar: _uploadedAssets


+(BOOL)supportsSecureCoding;
-(BOOL)isMissingUploadsWithDiffs:(NSUInteger)arg0 isDocumentSyncPaused:(BOOL)arg1 isDocumentResumingSync:(BOOL)arg2 ;
-(BOOL)shouldRecreateUploadJobGivenDiffs:(NSUInteger)arg0 ;
-(NSUInteger)diffAgainstLocalVersion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initForPackage:(BOOL)arg0 ;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalVersion:(id)arg0 ;
-(id)initWithServerVersion:(id)arg0 ;
-(id)initWithVersion:(id)arg0 ;
-(id)isPackageObj;
-(id)sizeObj;
-(void)_clearSignatures:(NSUInteger)arg0 isPackage:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;
-(void)updateFromFSAtPath:(id)arg0 filenameOverride:(id)arg1 ;
-(void)updateLocationAndMetaFromFSAtPath:(id)arg0 updateFilename:(BOOL)arg1 filenameOverride:(id)arg2 ;
-(void)updateServerFieldsFromVersion:(id)arg0 ;


@end


#endif