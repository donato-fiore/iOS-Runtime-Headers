// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHZONECHANGESREQUESTOPERATIONRESULT_H
#define CKDFETCHZONECHANGESREQUESTOPERATIONRESULT_H

@class NSData, NSSet;

#import <Foundation/Foundation.h>


@interface CKDFetchZoneChangesRequestOperationResult : NSObject

@property (nonatomic) BOOL hasPendingArchivedRecords; // ivar: _hasPendingArchivedRecords
@property (retain, nonatomic) NSData *resultClientChangeTokenData; // ivar: _resultClientChangeTokenData
@property (retain, nonatomic) NSData *resultServerChangeTokenData; // ivar: _resultServerChangeTokenData
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) NSSet *syncObligationZoneIDs; // ivar: _syncObligationZoneIDs


-(id)init;


@end


#endif