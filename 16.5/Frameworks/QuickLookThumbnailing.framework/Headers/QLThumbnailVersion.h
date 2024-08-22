// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILVERSION_H
#define QLTHUMBNAILVERSION_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLThumbnailVersion : NSObject <NSSecureCoding>



@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, getter=isDefaultVersion) BOOL defaultVersion;
@property NSUInteger fileSize; // ivar: _fileSize
@property (copy) NSString *filenameExtension; // ivar: _filenameExtension
@property (copy) NSString *generatorID; // ivar: _generatorID
@property (copy) NSString *generatorVersion; // ivar: _generatorVersion
@property NSUInteger ino; // ivar: _ino
@property (copy) NSDate *modificationDate; // ivar: _modificationDate
@property (copy) NSData *versionIdentifier; // ivar: _versionIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithFPItem:(id)arg0 automaticallyGenerated:(BOOL)arg1 ;
-(id)initWithFPItem:(id)arg0 generatorID:(id)arg1 generatorVersion:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 automaticallyGenerated:(BOOL)arg1 ;
-(id)initWithFileURL:(id)arg0 generatorID:(id)arg1 generatorVersion:(id)arg2 ;
-(id)initWithModificationDate:(id)arg0 fileSize:(NSUInteger)arg1 filenameExtension:(id)arg2 versionIdentifier:(id)arg3 ino:(NSUInteger)arg4 generatorID:(id)arg5 generatorVersion:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getGeneratorID:(*id)arg0 version:(*id)arg1 ;


@end


#endif