// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSFTPFILE_H
#define NMSFTPFILE_H

@class NSNumber, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMSFTPFile : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (retain, nonatomic) NSDate *lastAccess; // ivar: _lastAccess
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (nonatomic) NSUInteger ownerGroupID; // ivar: _ownerGroupID
@property (nonatomic) NSUInteger ownerUserID; // ivar: _ownerUserID
@property (retain, nonatomic) NSString *permissions; // ivar: _permissions


+(id)fileWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(char)filetypeletter:(NSUInteger)arg0 ;
-(id)convertPermissionToSymbolicNotation:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFilename:(id)arg0 ;
-(void)populateValuesFromSFTPAttributes:(struct _LIBSSH2_SFTP_ATTRIBUTES )arg0 ;


@end


#endif