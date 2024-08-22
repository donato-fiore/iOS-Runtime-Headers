// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTSOURCEMAPSSUPPORTHISTORYENTRYROUTE_H
#define RTSOURCEMAPSSUPPORTHISTORYENTRYROUTE_H



#import "RTSourceMapsSupportHistoryEntry.h"

@interface RTSourceMapsSupportHistoryEntryRoute : RTSourceMapsSupportHistoryEntry

@property (readonly, nonatomic) BOOL navigationWasInterrupted; // ivar: _navigationWasInterrupted


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsageDate:(id)arg0 navigationWasInterrupted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif