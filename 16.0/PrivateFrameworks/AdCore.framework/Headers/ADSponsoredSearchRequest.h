// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSPONSOREDSEARCHREQUEST_H
#define ADSPONSOREDSEARCHREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "ADUserTargetingProperties.h"

@interface ADSponsoredSearchRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL clientExclusive; // ivar: _clientExclusive
@property (retain, nonatomic) NSString *deploymentID; // ivar: _deploymentID
@property (nonatomic) BOOL enableImagesForDupes; // ivar: _enableImagesForDupes
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (nonatomic) BOOL hasClientExclusive;
@property (readonly, nonatomic) BOOL hasDeploymentID;
@property (nonatomic) BOOL hasEnableImagesForDupes;
@property (readonly, nonatomic) BOOL hasExperimentID;
@property (nonatomic) BOOL hasInAllocation;
@property (nonatomic) BOOL hasIsBaseline;
@property (nonatomic) BOOL hasIsTest;
@property (readonly, nonatomic) BOOL hasProperties;
@property (nonatomic) BOOL hasSupportedODMLVersion;
@property (readonly, nonatomic) BOOL hasTreatmentID;
@property (nonatomic) BOOL inAllocation; // ivar: _inAllocation
@property (nonatomic) BOOL isBaseline; // ivar: _isBaseline
@property (nonatomic) BOOL isTest; // ivar: _isTest
@property (retain, nonatomic) ADUserTargetingProperties *properties; // ivar: _properties
@property (nonatomic) int supportedODMLVersion; // ivar: _supportedODMLVersion
@property (retain, nonatomic) NSString *treatmentID; // ivar: _treatmentID


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif