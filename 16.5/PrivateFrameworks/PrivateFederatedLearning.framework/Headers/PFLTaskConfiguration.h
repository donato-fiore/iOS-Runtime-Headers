// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKCONFIGURATION_H
#define PFLTASKCONFIGURATION_H

@class NSString, NSNumber, MLModelConfiguration, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFLTaskConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *dataProviderIdentifier; // ivar: _dataProviderIdentifier
@property (readonly, nonatomic) NSString *eligibilityCheckIdentifier; // ivar: _eligibilityCheckIdentifier
@property (readonly, nonatomic) NSNumber *eligiblityProbability; // ivar: _eligiblityProbability
@property (nonatomic) int expectedModelVersion; // ivar: _expectedModelVersion
@property (readonly, nonatomic) NSString *metricsIdentifier; // ivar: _metricsIdentifier
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration; // ivar: _modelConfiguration
@property (retain, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic) NSURL *modelTemporaryURL; // ivar: _modelTemporaryURL
@property (readonly, nonatomic) unsigned int privatizationNormBinCount; // ivar: _privatizationNormBinCount
@property (readonly, nonatomic) CGFloat privatizationNormMax; // ivar: _privatizationNormMax
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId
@property (readonly, nonatomic) NSArray *trainableLayers; // ivar: _trainableLayers
@property (readonly, nonatomic) CGFloat validationSplit; // ivar: _validationSplit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPFLTask:(id)arg0 ;
-(id)initWithRawValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif