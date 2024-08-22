// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSORIENTATIONSTAGECOMPONENT_H
#define SBTRAITSORIENTATIONSTAGECOMPONENT_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageComponent;

#import <Foundation/Foundation.h>


@interface SBTraitsOrientationStageComponent : NSObject <SBFTraitsPreferencesStageComponent>



@property (readonly, nonatomic) NSNumber *componentOrder; // ivar: _componentOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)preferencesType;
-(id)init;
-(id)initWithComponentOrder:(id)arg0 ;


@end


#endif