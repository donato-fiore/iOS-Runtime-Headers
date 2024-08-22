// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMAGNETCORRUPTIONMETRIC_H
#define IDSMAGNETCORRUPTIONMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSMagnetCorruptionMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSUInteger correctFramesSinceLastCorruption; // ivar: _correctFramesSinceLastCorruption
@property (readonly, nonatomic) NSUInteger correctRawBytesSinceLastCorruption; // ivar: _correctRawBytesSinceLastCorruption
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSUInteger discardedRawBytes; // ivar: _discardedRawBytes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger linkType; // ivar: _linkType
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger recoveryTimeInMs; // ivar: _recoveryTimeInMs
@property (readonly) Class superclass;


-(id)initWithCorrectFramesSinceLastCorruption:(NSUInteger)arg0 correctRawBytesSinceLastCorruption:(NSUInteger)arg1 discardedRawBytes:(NSUInteger)arg2 recoveryTimeInMs:(NSUInteger)arg3 linkType:(NSUInteger)arg4 ;


@end


#endif