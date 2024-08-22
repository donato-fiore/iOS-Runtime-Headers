// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARCONTEXTUALDATA_H
#define _EARCONTEXTUALDATA_H


#import <Foundation/Foundation.h>


@interface _EARContextualData : NSObject {
    shared_ptr<quasar::ContextualData> _contextualData;
}




+(void)initialize;
-(BOOL)addNamedEntity:(id)arg0 metadata:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)metrics;
-(struct map<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> )getWords;
-(struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> )getTemplateToAverageCost;
-(struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> )getTemplateToDeviationCost;
-(void)iterNamedEntitySourceWithApplication:(id)arg0 block:(id)arg1 ;
-(void)iterRankedContactSourceWithApplication:(id)arg0 block:(id)arg1 ;


@end


#endif