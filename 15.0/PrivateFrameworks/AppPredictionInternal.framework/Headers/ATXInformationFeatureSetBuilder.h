// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINFORMATIONFEATURESETBUILDER_H
#define ATXINFORMATIONFEATURESETBUILDER_H

@class NSMutableDictionary;
@protocol ATXFeatureSetBuilderProtocol;

#import <Foundation/Foundation.h>


@interface ATXInformationFeatureSetBuilder : NSObject <ATXFeatureSetBuilderProtocol>

 {
    NSMutableDictionary *_features;
}




+(id)stringForInfoSuggestionFeature:(NSUInteger)arg0 ;
-(id)build;
-(void)appendFeature:(NSUInteger)arg0 value:(CGFloat)arg1 ;
-(void)setFeatureWithName:(id)arg0 toValue:(id)arg1 ;


@end


#endif