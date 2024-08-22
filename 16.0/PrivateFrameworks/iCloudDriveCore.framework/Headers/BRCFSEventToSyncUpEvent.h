// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFSEVENTTOSYNCUPEVENT_H
#define BRCFSEVENTTOSYNCUPEVENT_H



#import "BRCEventMetric.h"
#import "BRCItemID.h"

@interface BRCFSEventToSyncUpEvent : BRCEventMetric

@property (nonatomic) NSUInteger contentSize; // ivar: _contentSize
@property (nonatomic) NSUInteger fileID; // ivar: _fileID
@property (nonatomic) unsigned int genID; // ivar: _genID
@property (nonatomic) BOOL isPackage; // ivar: _isPackage
@property (retain, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (nonatomic) NSUInteger mtime; // ivar: _mtime
@property (nonatomic) NSUInteger syncUpBatchSize; // ivar: _syncUpBatchSize


-(id)additionalPayload;
-(id)associatedAppTelemetryEvent;
-(id)subDescription;


@end


#endif