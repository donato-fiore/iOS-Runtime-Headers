// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREQUESTCOUNTERSTATISTICS_H
#define GEOREQUESTCOUNTERSTATISTICS_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORequestCounterStatistics : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_resultCounts;
}


@property (readonly, nonatomic) NSUInteger bytesReceived; // ivar: _bytesReceived
@property (readonly, nonatomic) NSUInteger bytesTransmitted; // ivar: _bytesTransmitted
@property (readonly, nonatomic) int durationCount; // ivar: _durationCount
@property (readonly, nonatomic) NSInteger durationUSecondsTotal; // ivar: _durationUSeconds
@property (readonly, nonatomic) NSUInteger usedInterfaces; // ivar: _usedInterfaces


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countForResult:(unsigned char)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)addUsedInterfaces:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementBytesReceived:(NSUInteger)arg0 ;
-(void)incrementBytesTransmitted:(NSUInteger)arg0 ;
-(void)incrementCountForResult:(unsigned char)arg0 ;
-(void)incrementDuration:(CGFloat)arg0 ;


@end


#endif