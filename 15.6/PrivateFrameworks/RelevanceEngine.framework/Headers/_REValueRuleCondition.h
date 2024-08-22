// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REVALUERULECONDITION_H
#define _REVALUERULECONDITION_H

@protocol REAutomaticExportedInterface;


#import "RECondition.h"
#import "REFeature.h"

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface>

 {
    BOOL _allowsEmptyValueForFeature;
}


@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSInteger relation; // ivar: _relation
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFeature:(id)arg0 relation:(NSInteger)arg1 value:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif