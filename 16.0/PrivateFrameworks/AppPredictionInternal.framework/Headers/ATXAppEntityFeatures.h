// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPENTITYFEATURES_H
#define ATXAPPENTITYFEATURES_H

@class NSNumber;
@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXAppEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (retain, nonatomic) NSNumber *appCategoryScore; // ivar: _appCategoryScore
@property (retain, nonatomic) NSNumber *appCategoryScore_v2; // ivar: _appCategoryScore_v2
@property (retain, nonatomic) NSNumber *globalInterruptingPrior; // ivar: _globalInterruptingPrior
@property (retain, nonatomic) NSNumber *globalModeAffinityPrior; // ivar: _globalModeAffinityPrior
@property (retain, nonatomic) NSNumber *notificationsReceivedInLastTwoWeeks; // ivar: _notificationsReceivedInLastTwoWeeks


-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif