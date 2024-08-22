// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSSUGGESTIONLROUTPUT_H
#define ATXNOTIFICATIONSSUGGESTIONLROUTPUT_H

@class NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface ATXNotificationsSuggestionLROutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSDictionary *turnOffProbability; // ivar: _turnOffProbability
@property (nonatomic) NSInteger wantTurnOff; // ivar: _wantTurnOff


-(id)featureValueForName:(id)arg0 ;
-(id)initWithWantTurnOff:(NSInteger)arg0 turnOffProbability:(id)arg1 ;


@end


#endif