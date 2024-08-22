// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIARCHIVELISTINGCONTROLLER_H
#define _UIARCHIVELISTINGCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_UILibArchiveStreamingReader.h"

@interface _UIArchiveListingController : NSObject {
    _UILibArchiveStreamingReader *_archiveReader;
    BOOL _isValidArchive;
}


@property (nonatomic) NSInteger appleDoubleIdentificationType; // ivar: _appleDoubleIdentificationType
@property (readonly, nonatomic) NSString *archivePath; // ivar: _archivePath
@property (nonatomic) BOOL excludeDotFilesFromResults; // ivar: _excludeDotFilesFromResults


-(BOOL)_shouldVisitItem:(id)arg0 ;
-(BOOL)determineIsReadableArchive;
// -(BOOL)enumerateLogicalItemsWithBlock:(id)arg0 error:(unk)arg1  ;
-(id)initWithArchivePath:(id)arg0 ;
-(void)dealloc;


@end


#endif