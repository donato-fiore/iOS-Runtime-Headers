// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFZIPENDOFCENTRALDIRECTORYRECORD_H
#define PFZIPENDOFCENTRALDIRECTORYRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFZipEndOfCentralDirectoryRecord : NSObject {
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString *_comment;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif