// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDATABASEBACKUPRECORD_H
#define BRCDATABASEBACKUPRECORD_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface BRCDatabaseBackupRecord : NSObject

@property (retain, nonatomic) NSNumber *docID; // ivar: _docID
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (nonatomic) unsigned int genCount; // ivar: _genCount
@property (nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (retain, nonatomic) NSString *relativePath; // ivar: _relativePath


-(id)description;
-(id)initWithPQLResultSet:(id)arg0 ;
-(id)initWithRelativePath:(id)arg0 fileID:(id)arg1 docID:(id)arg2 genCount:(unsigned int)arg3 isDirectory:(BOOL)arg4 ;


@end


#endif