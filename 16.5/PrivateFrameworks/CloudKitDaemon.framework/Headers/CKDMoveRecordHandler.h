// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMOVERECORDHANDLER_H
#define CKDMOVERECORDHANDLER_H

@class CKMovePhotosChange, CKRecord;


#import "CKDModifyRecordHandler.h"
#import "CKDMovePhotosOperation.h"

@interface CKDMoveRecordHandler : CKDModifyRecordHandler

@property (retain, nonatomic) CKMovePhotosChange *moveChange; // ivar: _moveChange
@property (weak, nonatomic) CKDMovePhotosOperation *operation;
@property (retain, nonatomic) CKRecord *serverDestinationRecord;
@property (retain, nonatomic) CKRecord *serverMoveMarkerRecord; // ivar: _serverMoveMarkerRecord


+(id)moveHandlerWithMoveChange:(id)arg0 operation:(id)arg1 ;
-(id)_initWithMoveChange:(id)arg0 operation:(id)arg1 ;
-(id)record;


@end


#endif