// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDOUTPUTBUILDER_H
#define AMDOUTPUTBUILDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMDOutputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *outputDefinitions; // ivar: _outputDefinitions
@property (retain, nonatomic) NSString *useCaseId; // ivar: _useCaseId


-(BOOL)filterLogicalId:(int)arg0 byBitmask:(id)arg1 ;
-(BOOL)isValid;
-(id)getAllFeatureIds;
-(id)getTopNContent:(NSUInteger)arg0 forOutput:(id)arg1 FromMLProvider:(id)arg2 usingFeatureProvider:(id)arg3 andModelAssets:(id)arg4 withColdstartModelId:(id)arg5 error:(*id)arg6 ;
-(id)getTopNContent:(NSUInteger)arg0 fromMLProvider:(id)arg1 usingFeatureProvider:(id)arg2 andModelAssets:(id)arg3 withColdstartModelId:(id)arg4 error:(*id)arg5 ;
-(id)initWithDictionary:(id)arg0 forUseCase:(id)arg1 ;


@end


#endif