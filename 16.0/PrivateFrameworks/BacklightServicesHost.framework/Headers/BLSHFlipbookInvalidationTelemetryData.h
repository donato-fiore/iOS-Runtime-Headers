// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHFLIPBOOKINVALIDATIONTELEMETRYDATA_H
#define BLSHFLIPBOOKINVALIDATIONTELEMETRYDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "BLSHFlipbookFramesHistogram.h"

@interface BLSHFlipbookInvalidationTelemetryData : NSObject

@property (readonly, nonatomic) BOOL didClearDateSpecifiers; // ivar: _didClearDateSpecifiers
@property (readonly, nonatomic) NSArray *environmentIdentifiers; // ivar: _environmentIdentifiers
@property (readonly, nonatomic) BLSHFlipbookFramesHistogram *invalidatedFramesHistogram; // ivar: _invalidatedFramesHistogram
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) BOOL wasReset; // ivar: _wasReset


-(id)description;
-(id)initWithTimestamp:(CGFloat)arg0 reason:(id)arg1 source:(id)arg2 didClearDateSpecifiers:(BOOL)arg3 wasReset:(BOOL)arg4 invalidatedFramesHistogram:(id)arg5 environmentIdentifiers:(id)arg6 ;


@end


#endif