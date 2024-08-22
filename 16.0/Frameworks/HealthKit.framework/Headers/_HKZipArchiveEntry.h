// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKZIPARCHIVEENTRY_H
#define _HKZIPARCHIVEENTRY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_HKZipArchiveExtractor.h"

@interface _HKZipArchiveEntry : NSObject {
    _HKZipArchiveExtractor *_extractor;
    *archive_entry _entry;
    NSData *_data;
    NSInteger _enumerationCount;
}


@property (readonly, nonatomic) BOOL didReadEntryData; // ivar: _didReadEntryData
@property (readonly, copy, nonatomic) NSString *pathname; // ivar: _pathname


+(BOOL)_assignReadError:(*id)arg0 archive:(struct archive *)arg1 ;
-(BOOL)_enumerateLinesInCurrentEntryWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)_isExtractorStateValidWithError:(*id)arg0 ;
-(BOOL)enumerateLinesWithError:(*id)arg0 block:(id)arg1 ;
-(id)_getDataWithBufferingWithMaxSizeBytes:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_getDataWithSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)dataWithError:(*id)arg0 ;
-(id)dataWithMaxSizeBytes:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithExtractor:(id)arg0 currentEntry:(struct archive_entry *)arg1 pathname:(id)arg2 ;


@end


#endif