// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLLOADEREVENT_H
#define MLLOADEREVENT_H

@class NSString, NSNumber, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *compilerVersion; // ivar: _compilerVersion
@property (copy, nonatomic) NSNumber *computeUnits; // ivar: _computeUnits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSNumber *firstPartyExecutable; // ivar: _firstPartyExecutable
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *modelDimension; // ivar: _modelDimension
@property (copy, nonatomic) NSString *modelHash; // ivar: _modelHash
@property (copy, nonatomic) NSNumber *modelIsEncrypted; // ivar: _modelIsEncrypted
@property (copy, nonatomic) NSNumber *modelLoadError; // ivar: _modelLoadError
@property (copy, nonatomic) NSNumber *modelLoadTime; // ivar: _modelLoadTime
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSNumber *modelOrigin; // ivar: _modelOrigin
@property (copy, nonatomic) NSNumber *modelType; // ivar: _modelType
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly) NSString *name;
@property (copy, nonatomic) NSString *nnModelNetHash; // ivar: _nnModelNetHash
@property (copy, nonatomic) NSString *nnModelShapeHash; // ivar: _nnModelShapeHash
@property (copy, nonatomic) NSString *nnModelWeightsHash; // ivar: _nnModelWeightsHash
@property (readonly) Class superclass;


-(id)numberFromCString:(char *)arg0 ;
-(void)extractAndSetModelDetailsFromArchive:(*void)arg0 ;


@end


#endif