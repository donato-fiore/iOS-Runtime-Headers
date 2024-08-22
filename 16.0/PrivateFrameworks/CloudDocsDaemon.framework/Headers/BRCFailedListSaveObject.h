// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFAILEDLISTSAVEOBJECT_H
#define BRCFAILEDLISTSAVEOBJECT_H


#import <Foundation/Foundation.h>

#import "BRCPendingChangesStream.h"

@interface BRCFailedListSaveObject : NSObject

@property (readonly, nonatomic) id *clientTruthCallback; // ivar: _clientTruthCallback
@property (readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // ivar: _pendingChangesStream
@property (readonly, nonatomic) id *serverTruthCallback; // ivar: _serverTruthCallback


// -(id)initWithPendingChangesStream:(id)arg0 serverTruthCallback:(id)arg1 clientTruthCallback:(unk)arg2  ;


@end


#endif