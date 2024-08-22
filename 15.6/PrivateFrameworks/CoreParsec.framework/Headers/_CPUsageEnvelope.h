// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPUSAGEENVELOPE_H
#define _CPUSAGEENVELOPE_H

@class PBCodable, NSString, NSData;
@protocol _CPUsageEnvelope, NSSecureCoding;


#import "_CPDeviceContext.h"
#import "_CPImagesUsagePropensity.h"
#import "_CPNewsUsagePropensity.h"
#import "_CPSafariUsagePropensity.h"
#import "_CPSpotlightUsagePropensity.h"
#import "_CPUsageSinceLookback.h"

@interface _CPUsageEnvelope : PBCodable <_CPUsageEnvelope, NSSecureCoding>



@property (nonatomic) NSInteger collectionEndTimestamp; // ivar: _collectionEndTimestamp
@property (nonatomic) NSInteger collectionStartTimestamp; // ivar: _collectionStartTimestamp
@property (nonatomic) int configuredLookbackTimeInDays; // ivar: _configuredLookbackTimeInDays
@property (retain, nonatomic) _CPDeviceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity; // ivar: _imagesUsagePropensity
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity; // ivar: _newsUsagePropensity
@property (retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity; // ivar: _safariUsagePropensity
@property (retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity; // ivar: _spotlightUsagePropensity
@property (readonly) Class superclass;
@property (nonatomic) int totalSessions; // ivar: _totalSessions
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // ivar: _usageSinceLookback
@property (copy, nonatomic) NSData *uuidBytes; // ivar: _uuidBytes
@property (readonly, nonatomic) NSUInteger whichKind; // ivar: _whichKind


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)clearKind;
-(void)writeTo:(id)arg0 ;


@end


#endif