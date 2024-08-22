// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATABASEARCHIVERWRITER_H
#define TSPDATABASEARCHIVERWRITER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSPDatabase.h"
#import "TSPDistributableFileManager.h"

@interface TSPDatabaseArchiverWriter : NSObject {
    NSInteger _dataStateIdentifier;
    NSString *_fileStateIdentifier;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
}


@property (nonatomic) NSInteger dataStateIdentifier;
@property (retain, nonatomic) NSString *fileStateIdentifier;
@property (retain, nonatomic) NSString *filenameHint; // ivar: _filenameHint
@property (nonatomic) BOOL forceFileStorage; // ivar: _forceFileStorage
@property (readonly, nonatomic) BOOL hasDataState; // ivar: _hasDataState
@property (readonly, nonatomic) BOOL hasFileState; // ivar: _hasFileState


-(BOOL)serializeArchive:(struct Message *)arg0 ;
-(id)initWithDatabase:(id)arg0 fileManager:(id)arg1 ;
-(struct sqlite3_blob *)_openDatabaseBlobWithSize:(int)arg0 ;
-(void)_writeDataFromInputStreamToDatabase:(id)arg0 length:(int)arg1 ;
-(void)_writeDataFromInputStreamToFile:(id)arg0 length:(NSInteger)arg1 ;
-(void)serializeDataFromStream:(id)arg0 length:(NSInteger)arg1 ;


@end


#endif