// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANEREQUEST_H
#define _ANEREQUEST_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "_ANEPerformanceStats.h"
#import "_ANEIOSurfaceObject.h"

@interface _ANERequest : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSArray *inputArray; // ivar: _inputArray
@property (readonly, nonatomic) NSArray *inputIndexArray; // ivar: _inputIndexArray
@property (readonly, nonatomic) NSArray *outputArray; // ivar: _outputArray
@property (readonly, nonatomic) NSArray *outputIndexArray; // ivar: _outputIndexArray
@property (retain, nonatomic) _ANEPerformanceStats *perfStats; // ivar: _perfStats
@property (readonly, nonatomic) NSArray *perfStatsArray; // ivar: _perfStatsArray
@property (readonly, copy, nonatomic) NSNumber *procedureIndex; // ivar: _procedureIndex
@property (readonly, nonatomic) _ANEIOSurfaceObject *weightsBuffer; // ivar: _weightsBuffer


+(id)requestWithInputs:(id)arg0 inputIndices:(id)arg1 outputs:(id)arg2 outputIndices:(id)arg3 perfStats:(id)arg4 procedureIndex:(id)arg5 ;
+(id)requestWithInputs:(id)arg0 inputIndices:(id)arg1 outputs:(id)arg2 outputIndices:(id)arg3 procedureIndex:(id)arg4 ;
+(id)requestWithInputs:(id)arg0 inputIndices:(id)arg1 outputs:(id)arg2 outputIndices:(id)arg3 weightsBuffer:(id)arg4 perfStats:(id)arg5 procedureIndex:(id)arg6 ;
+(id)requestWithInputs:(id)arg0 inputIndices:(id)arg1 outputs:(id)arg2 outputIndices:(id)arg3 weightsBuffer:(id)arg4 procedureIndex:(id)arg5 ;
-(BOOL)validate;
-(id)description;
-(id)initWithInputs:(id)arg0 inputIndices:(id)arg1 outputs:(id)arg2 outputIndices:(id)arg3 weightsBuffer:(id)arg4 perfStats:(id)arg5 procedureIndex:(id)arg6 ;


@end


#endif