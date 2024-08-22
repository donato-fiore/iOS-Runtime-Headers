// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCLOCALVERSION_H
#define BRCLOCALVERSION_H

@class NSString, NSError, CKRecord;


#import "BRCVersion.h"
#import "BRCItemGlobalID.h"
#import "BRFieldContentSignature.h"

@interface BRCLocalVersion : BRCVersion

@property (readonly, nonatomic) NSUInteger localChangeCount; // ivar: _localChangeCount
@property (retain, nonatomic) NSString *oldVersionIdentifier; // ivar: _oldVersionIdentifier
@property (retain, nonatomic) BRCItemGlobalID *prevZoneGlobalID; // ivar: _prevZoneGlobalID
@property (retain, nonatomic) NSError *uploadError; // ivar: _uploadError
@property (retain, nonatomic) CKRecord *uploadedAssets; // ivar: _uploadedAssets
@property (readonly, nonatomic) BRFieldContentSignature *versionSignature;


+(BOOL)supportsSecureCoding;
-(BOOL)isMissingUploadsWithDiffs:(NSUInteger)arg0 isDocumentSyncPaused:(BOOL)arg1 isDocumentResumingSync:(BOOL)arg2 ;
-(BOOL)shouldRecreateUploadJobGivenDiffs:(NSUInteger)arg0 ;
-(NSUInteger)diffAgainstLocalVersion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initForPackage:(BOOL)arg0 ;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImportObject:(id)arg0 ;
-(id)initWithLocalVersion:(id)arg0 ;
-(id)initWithServerVersion:(id)arg0 ;
-(id)initWithVersion:(id)arg0 ;
-(id)isPackageObj;
-(id)sizeObj;
-(void)_clearSignatures:(NSUInteger)arg0 isPackage:(BOOL)arg1 ;
-(void)bumpLocalChangeCount;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;
-(void)updateServerFieldsFromVersion:(id)arg0 ;
-(void)updateWithImportObject:(id)arg0 onlyContentDependentProperties:(BOOL)arg1 ;


@end


#endif