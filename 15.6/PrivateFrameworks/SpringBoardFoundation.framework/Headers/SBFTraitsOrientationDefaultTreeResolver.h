// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSORIENTATIONDEFAULTTREERESOLVER_H
#define SBFTRAITSORIENTATIONDEFAULTTREERESOLVER_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageTreeResolving;


#import "SBFTraitsOrientationStageComponent.h"
#import "SBFTraitsSettingsValidator.h"

@interface SBFTraitsOrientationDefaultTreeResolver : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeResolving>

 {
    SBFTraitsSettingsValidator *_settingsValidator;
}


@property (nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_node:(id)arg0 validatesNewOrientation:(NSInteger)arg1 ;
-(id)init;
-(void)resolveStagePreferencesTree:(id)arg0 context:(id)arg1 ;


@end


#endif