// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEGYMFEATURIZER_H
#define ATXMODEGYMFEATURIZER_H

@class NSString;
@protocol ATXModeFeaturizer, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>

#import "ATXPOICategoryVisitDataProvider.h"

@interface ATXModeGymFeaturizer : NSObject <ATXModeFeaturizer>



@property (retain, nonatomic) ATXPOICategoryVisitDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)provideFeatures;
-(void)beginListening;
-(void)handleChange;
-(void)stopListening;


@end


#endif