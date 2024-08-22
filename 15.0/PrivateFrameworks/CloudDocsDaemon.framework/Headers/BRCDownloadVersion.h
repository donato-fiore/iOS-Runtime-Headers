// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDOWNLOADVERSION_H
#define BRCDOWNLOADVERSION_H

@class CKRecordID, CKRecord, NSNumber, NSError, GSPermanentStorage;


#import "BRCDownload.h"
#import "BRCClientZone.h"
#import "BRCProgress.h"

@interface BRCDownloadVersion : BRCDownload {
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    BOOL _sharedZone;
}


@property (readonly, nonatomic) NSNumber *docID; // ivar: _docID
@property (readonly, nonatomic) NSError *gsError; // ivar: _gsError
@property (readonly, nonatomic) BOOL isLoser; // ivar: _isLoser
@property (retain, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) GSPermanentStorage *storage; // ivar: _storage


-(id)_stageContentWithSession:(id)arg0 error:(*id)arg1 ;
-(id)_stageWithSession:(id)arg0 creationInfo:(*id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithDocument:(id)arg0 stageID:(id)arg1 etag:(id)arg2 isLoser:(BOOL)arg3 ;
-(id)secondaryRecord;
-(id)secondaryRecordID;
-(int)kind;
-(void)setSecondaryRecord:(id)arg0 ;


@end


#endif