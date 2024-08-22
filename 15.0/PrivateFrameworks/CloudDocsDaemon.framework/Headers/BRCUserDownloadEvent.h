// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCUSERDOWNLOADEVENT_H
#define BRCUSERDOWNLOADEVENT_H

@class NSMutableSet, NSUUID;


#import "BRCEventMetric.h"

@interface BRCUserDownloadEvent : BRCEventMetric

@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (retain, nonatomic) NSMutableSet *docIDs; // ivar: _docIDs
@property (nonatomic) BOOL isDownloadingForBackup; // ivar: _isDownloadingForBackup
@property (nonatomic) BOOL isRecursiveDownload; // ivar: _isRecursiveDownload
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (retain, nonatomic) NSUUID *operationID; // ivar: _operationID
@property (nonatomic) NSUInteger totalContentSize; // ivar: _totalContentSize


-(id)additionalPayload;
-(id)associatedAppTelemetryEvent;
-(id)init;
-(id)subDescription;


@end


#endif