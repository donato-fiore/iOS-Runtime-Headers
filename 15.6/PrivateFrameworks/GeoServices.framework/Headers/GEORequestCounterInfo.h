// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREQUESTCOUNTERINFO_H
#define GEOREQUESTCOUNTERINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORequestCounterInfo : NSObject <NSSecureCoding>

 {
    NSDictionary *_requestTypeStatistics;
    NSUInteger _bytesTransmitted;
    NSUInteger _bytesReceived;
    NSInteger _durationUSeconds;
    int _durationCount;
    NSUInteger _usedInterfaces;
}


@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSArray *requestTypes;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)durationAverage;
-(CGFloat)durationAverageForType:(struct ? )arg0 ;
-(CGFloat)durationTotal;
-(CGFloat)durationTotalForType:(struct ? )arg0 ;
-(NSUInteger)numberOfRequestsForType:(struct ? )arg0 result:(unsigned char)arg1 ;
-(NSUInteger)recvBytes;
-(NSUInteger)recvBytesForType:(struct ? )arg0 ;
-(NSUInteger)usedInterfaces;
-(NSUInteger)usedInterfacesForType:(struct ? )arg0 ;
-(NSUInteger)xmitBytes;
-(NSUInteger)xmitBytesForType:(struct ? )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)nonZeroResultTypesForType:(struct ? )arg0 ;
-(void)_appendFormattedCSVStringTo:(id)arg0 forAppId:(id)arg1 ;
-(void)_appendFormattedStringTo:(id)arg0 ;
-(void)_generateAggregateStatistics;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateRequestTypes:(id)arg0 ;


@end


#endif