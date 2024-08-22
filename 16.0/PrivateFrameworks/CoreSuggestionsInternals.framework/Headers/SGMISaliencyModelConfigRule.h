// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMISALIENCYMODELCONFIGRULE_H
#define SGMISALIENCYMODELCONFIGRULE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SGMISaliencyModelConfigRule : NSObject

@property (readonly) NSNumber *featureName; // ivar: _featureName
@property (readonly) NSNumber *output; // ivar: _output
@property (readonly) NSNumber *strictLowerBound; // ivar: _strictLowerBound
@property (readonly) NSNumber *strictUpperBound; // ivar: _strictUpperBound


-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFeatureName:(id)arg0 strictLowerBound:(id)arg1 strictUpperBound:(id)arg2 output:(id)arg3 ;


@end


#endif