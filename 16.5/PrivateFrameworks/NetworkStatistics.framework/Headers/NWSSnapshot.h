// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWSSNAPSHOT_H
#define NWSSNAPSHOT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface NWSSnapshot : NSObject {
    nstat_counts _counts;
}


@property (readonly) unsigned int _connectAttempts;
@property (readonly) unsigned int _connectSuccesses;
@property (readonly) CGFloat _rttAverage;
@property (readonly) CGFloat _rttMinimum;
@property (readonly) CGFloat _rttVariation;
@property (readonly) unsigned int _rxDuplicateBytes;
@property (readonly) unsigned int _rxOutOfOrderBytes;
@property (readonly) unsigned int _txRetransmittedBytes;
@property (readonly) NSUInteger changeSeqno; // ivar: _changeSeqno
@property (readonly) NSString *provider; // ivar: _provider
@property (readonly) NSUInteger rxBytes;
@property (readonly) NSUInteger rxCellularBytes;
@property (readonly) NSUInteger rxPackets;
@property (readonly) NSUInteger rxWiFiBytes;
@property (readonly) NSUInteger rxWiredBytes;
@property (readonly) NSUInteger sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly) NSDictionary *traditionalDictionary; // ivar: _traditionalDictionary
@property (readonly) NSUInteger txBytes;
@property (readonly) NSUInteger txCellularBytes;
@property (readonly) NSUInteger txPackets;
@property (readonly) NSUInteger txWiFiBytes;
@property (readonly) NSUInteger txWiredBytes;


-(id)_createCountsForProvider:(int)arg0 ;
-(id)_initWithCounts:(struct nstat_counts *)arg0 sourceIdent:(NSUInteger)arg1 seqno:(NSUInteger)arg2 ;
-(id)description;


@end


#endif