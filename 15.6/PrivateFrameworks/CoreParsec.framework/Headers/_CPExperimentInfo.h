// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPEXPERIMENTINFO_H
#define _CPEXPERIMENTINFO_H

@class PBCodable, NSString, NSData;
@protocol _CPExperimentInfo, NSSecureCoding;



@interface _CPExperimentInfo : PBCodable <_CPExperimentInfo, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *namespaceId; // ivar: _namespaceId
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif