// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFFILEARCHIVEDIRECTORY_H
#define MFFILEARCHIVEDIRECTORY_H

@class NSMutableDictionary, NSData, NSError, NSURL;

#import <Foundation/Foundation.h>

#import "MFFileArchiveEntry.h"

@interface MFFileArchiveDirectory : NSObject {
    NSMutableDictionary *_entries;
    NSMutableDictionary *_scrubbedEntries;
    MFFileArchiveEntry *_mainEntry;
}


@property (retain, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)_hasZipSignature:(id)arg0 ;
+(id)_entriesFromCentralDictionary:(struct CentralDirectory *)arg0 inData:(id)arg1 archiveData:(id)arg2 ;
+(id)archiveDirectory;
+(struct CentralDirectory *)_centralDirectory:(id)arg0 ;
+(struct CentralHeader *)_centralHeader:(id)arg0 ;
+(struct _NSRange )_rangeOfCentralDirectory:(NSInteger)arg0 ;
+(struct _NSRange )rangeOfCentralDirectoryInData:(id)arg0 ;
-(BOOL)inputWithData:(id)arg0 ;
-(BOOL)inputWithURL:(id)arg0 ;
-(BOOL)setArchiveEntry:(id)arg0 ;
-(id)archiveEntries;
-(id)description;
-(id)mainEntry;
-(id)scrubbedArchiveEntries;
-(void)_scrubContentDirectory;
-(void)setMainEntry:(id)arg0 ;


@end


#endif