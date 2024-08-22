// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRFILEOBJECTID_H
#define BRFILEOBJECTID_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying, PQLValuable;

#import <Foundation/Foundation.h>


@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>



@property (readonly, nonatomic) NSString *asString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *documentID;
@property (readonly, nonatomic) NSNumber *folderID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDocumentID;
@property (readonly, nonatomic) BOOL isFolderOrAliasID;
@property (readonly, nonatomic) NSUInteger rawID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned char type;


+(BOOL)supportsSecureCoding;
+(id)fileObjectIDForURL:(id)arg0 allocateDocID:(BOOL)arg1 error:(*id)arg2 ;
+(id)fileObjectIDWithString:(id)arg0 ;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
-(BOOL)isCloudDocsRoot;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFileObjectID:(id)arg0 ;
-(BOOL)isFpfsItem;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif