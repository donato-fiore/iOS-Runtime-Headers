// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFARCHIVEENTRY_H
#define WFARCHIVEENTRY_H


#import <Foundation/Foundation.h>


@interface WFArchiveEntry : NSObject

@property (readonly, nonatomic) id *dataProvider; // ivar: _dataProvider
@property (readonly, nonatomic) *archive_entry entry; // ivar: _entry


+(id)archiveEntriesWithTopLevelFileRepresentation:(id)arg0 usedFilenames:(id)arg1 ;
-(id)initWithDirectoryName:(id)arg0 ;
-(id)initWithFilename:(id)arg0 fileRepresentation:(id)arg1 ;
-(id)initWithFilename:(id)arg0 fileType:(unsigned short)arg1 filePermission:(unsigned short)arg2 fileSize:(NSInteger)arg3 modificationDate:(id)arg4 creationDate:(id)arg5 dataProvider:(id)arg6 ;
-(void)dealloc;


@end


#endif