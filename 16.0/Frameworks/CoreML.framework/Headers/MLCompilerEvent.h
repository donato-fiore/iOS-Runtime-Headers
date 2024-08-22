// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCOMPILEREVENT_H
#define MLCOMPILEREVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface MLCompilerEvent : NSObject <CUTCoreAnalyticsMetric>



@property (copy, nonatomic) NSString *compilerVersion; // ivar: _compilerVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *milUpgradeFailureReason; // ivar: _milUpgradeFailureReason
@property (copy, nonatomic) NSNumber *milUpgradeStatus; // ivar: _milUpgradeStatus
@property (copy, nonatomic) NSString *modelCompiledWithVersion; // ivar: _modelCompiledWithVersion
@property (copy, nonatomic) NSString *modelHash; // ivar: _modelHash
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSNumber *modelOrigin; // ivar: _modelOrigin
@property (copy, nonatomic) NSNumber *modelType; // ivar: _modelType
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)init;


@end


#endif