// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDVERSIONREQUIREMENTSMAP_H
#define TSPKNOWNFIELDVERSIONREQUIREMENTSMAP_H


#import <Foundation/Foundation.h>


@interface TSPKnownFieldVersionRequirementsMap : NSObject {
    unique_ptr<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> _map;
}




+(*void)updateMap:(*void)arg0 message:(struct Message *)arg1 byAddingRulesFromKnownFieldRuleProvider:(id)arg2 ;
+(id)newKnownFieldVersionRequirementsMapForMessage:(struct Message *)arg0 knownFieldRuleProvider:(id)arg1 ;
-(id)init;
-(id)initWithMap:(*void)arg0 ;
-(void)addRulesFromKnownFieldRuleProvider:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif