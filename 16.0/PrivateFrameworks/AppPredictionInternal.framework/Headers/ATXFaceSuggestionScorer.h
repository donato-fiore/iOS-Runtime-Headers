// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACESUGGESTIONSCORER_H
#define ATXFACESUGGESTIONSCORER_H

@class NSSet, NSDictionary;
@protocol ATXFaceSuggestionParameters;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionScorer : NSObject {
    NSSet *_descriptors;
    id<ATXFaceSuggestionParameters> *_parameters;
    NSDictionary *_appLaunchDictionary;
}


@property (readonly, copy, nonatomic) NSSet *signals; // ivar: _signals


-(CGFloat)featuredScoreForDescriptor:(id)arg0 ;
-(id)_mockScoreForDescriptor:(id)arg0 ;
-(id)initWithParameters:(id)arg0 descriptors:(id)arg1 ;
-(void)_loadAppLaunchData;
-(void)_loadSignals;


@end


#endif