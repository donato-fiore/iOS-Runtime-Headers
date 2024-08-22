// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCUPLOAD_H
#define BRCUPLOAD_H

@class NSString, CKRecord, CKRecordID, NSNumber;
@protocol BRCTransfer;

#import <Foundation/Foundation.h>

#import "BRCClientZone.h"
#import "BRCItemID.h"
#import "BRCProgress.h"

@interface BRCUpload : NSObject <BRCTransfer>

 {
    BRCClientZone *_clientZone;
}


@property (nonatomic) NSUInteger doneSize; // ivar: _doneSize
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) BRCProgress *progress; // ivar: _progress
@property (nonatomic) BOOL progressPublished; // ivar: _progressPublished
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecord *secondaryRecord;
@property (readonly, nonatomic) CKRecordID *secondaryRecordID;
@property (readonly, nonatomic) NSString *stageID; // ivar: _stageID
@property (readonly, nonatomic) NSInteger throttleID; // ivar: _throttleID
@property (readonly, nonatomic) NSUInteger totalSize; // ivar: _totalSize
@property (readonly, nonatomic) NSNumber *transferID;


-(id)description;
-(id)initWithDocument:(id)arg0 stageID:(id)arg1 transferSize:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif