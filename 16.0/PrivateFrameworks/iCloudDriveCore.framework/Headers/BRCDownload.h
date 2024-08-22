// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDOWNLOAD_H
#define BRCDOWNLOAD_H

@class NSString, CKRecord, CKRecordID, NSNumber;
@protocol BRCTransfer;

#import <Foundation/Foundation.h>

#import "BRCClientZone.h"
#import "BRCItemID.h"
#import "BRCProgress.h"

@interface BRCDownload : NSObject <BRCTransfer>

 {
    NSInteger _throttleID;
}


@property (readonly, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (nonatomic) NSUInteger doneSize; // ivar: _doneSize
@property (readonly, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) BRCProgress *progress; // ivar: _progress
@property (nonatomic) BOOL progressPublished; // ivar: _progressPublished
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecord *secondaryRecord;
@property (readonly, nonatomic) CKRecordID *secondaryRecordID;
@property (readonly, nonatomic) NSString *stageID; // ivar: _stageID
@property (readonly, nonatomic) NSUInteger totalSize; // ivar: _totalSize
@property (readonly, nonatomic) NSNumber *transferID;


-(id)initWithDocument:(id)arg0 stageID:(id)arg1 ;
-(void)dealloc;


@end


#endif