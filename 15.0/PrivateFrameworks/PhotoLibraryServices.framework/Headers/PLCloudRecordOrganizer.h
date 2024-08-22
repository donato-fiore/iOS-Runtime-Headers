// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDRECORDORGANIZER_H
#define PLCLOUDRECORDORGANIZER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLCloudRecordOrganizer : NSObject {
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly) NSMutableArray *albumRecords; // ivar: _albumRecords
@property (readonly) NSMutableArray *albumRecordsWithContainerChange; // ivar: _albumRecordsWithContainerChange
@property (readonly) NSMutableArray *assetRecords; // ivar: _assetRecords
@property (readonly) NSMutableArray *assetRecordsWithContainerChange; // ivar: _assetRecordsWithContainerChange
@property (readonly) NSMutableArray *deletePersonRecords; // ivar: _deletePersonRecords
@property (readonly) NSMutableArray *deleteRecords; // ivar: _deleteRecords
@property (readonly) NSMutableArray *expungedRecords; // ivar: _expungedRecords
@property (readonly) NSMutableArray *faceCropRecords; // ivar: _faceCropRecords
@property (readonly) NSMutableArray *masterRecords; // ivar: _masterRecords
@property (readonly) NSMutableArray *memoryRecords; // ivar: _memoryRecords
@property (readonly) NSMutableArray *personRecords; // ivar: _personRecords
@property (readonly) NSMutableArray *scopeRecords; // ivar: _scopeRecords
@property (readonly) NSMutableArray *suggestionRecords; // ivar: _suggestionRecords


+(BOOL)records:(id)arg0 containsScopedIdentifier:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)organizeRecords:(id)arg0 ;


@end


#endif