// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKZIPARCHIVEEXTRACTOR_H
#define _HKZIPARCHIVEEXTRACTOR_H

@class NSString, NSData, NSFileHandle, NSNumber;

#import <Foundation/Foundation.h>


@interface _HKZipArchiveExtractor : NSObject {
    NSString *_pathname;
    NSData *_archiveData;
    NSFileHandle *_fileHandle;
    NSNumber *_numberOfEntries;
    BOOL _isEnumeratingEntries;
}


@property (readonly, nonatomic) *archive archive; // ivar: _archive
@property (readonly, nonatomic) NSInteger enumerationCount; // ivar: _enumerationCount


-(BOOL)enumerateEntriesWithError:(*id)arg0 block:(id)arg1 ;
-(id)_initWithData:(id)arg0 fileHandle:(id)arg1 path:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithFileHandle:(id)arg0 ;
-(id)initWithPathname:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)numberOfEntriesWithError:(*id)arg0 ;


@end


#endif