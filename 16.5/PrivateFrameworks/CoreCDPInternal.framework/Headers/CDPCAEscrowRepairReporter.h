// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPCAESCROWREPAIRREPORTER_H
#define CDPCAESCROWREPAIRREPORTER_H

@class NSError;


#import "CDPCAReporter.h"

@interface CDPCAEscrowRepairReporter : CDPCAReporter

@property (nonatomic) NSUInteger context; // ivar: _context
@property (nonatomic) NSUInteger deviceEscrowRecordState; // ivar: _deviceEscrowRecordState
@property (nonatomic) BOOL didForceEscrowCache; // ivar: _didForceEscrowCache
@property (nonatomic) BOOL didSilentEscrowRecordRepairSucceed; // ivar: _didSilentEscrowRecordRepairSucceed
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL wasSilentEscrowRecordRepairAttempted; // ivar: _wasSilentEscrowRecordRepairAttempted


-(id)initWithContext:(NSUInteger)arg0 ;


@end


#endif