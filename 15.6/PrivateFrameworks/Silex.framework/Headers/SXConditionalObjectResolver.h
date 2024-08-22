// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONDITIONALOBJECTRESOLVER_H
#define SXCONDITIONALOBJECTRESOLVER_H

@protocol SXConditionValidating;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"

@interface SXConditionalObjectResolver : NSObject

@property (readonly, nonatomic) NSObject<SXConditionValidating> *conditionValidator; // ivar: _conditionValidator
@property (readonly, nonatomic) SXJSONObjectMerger *objectMerger; // ivar: _objectMerger


-(id)initWithConditionValidator:(id)arg0 objectMerger:(id)arg1 ;
-(id)resolveObjects:(id)arg0 context:(id)arg1 ;


@end


#endif