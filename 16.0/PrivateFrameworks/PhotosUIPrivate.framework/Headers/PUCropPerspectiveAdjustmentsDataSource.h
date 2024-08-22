// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCROPPERSPECTIVEADJUSTMENTSDATASOURCE_H
#define PUCROPPERSPECTIVEADJUSTMENTSDATASOURCE_H

@class NSMutableDictionary, NSMutableArray, PICompositionController, NSString, PEValuesCalculator;
@protocol PUAdjustmentsViewDataSource, PUCropPerspectiveAdjustmentsDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PUAdjustmentInfo.h"

@interface PUCropPerspectiveAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource>

 {
    NSInteger _orientation;
    PUAdjustmentInfo *_straightenAngleInfo;
    PUAdjustmentInfo *_pitchAngleInfo;
    PUAdjustmentInfo *_yawAngleInfo;
    NSMutableDictionary *_valueScaleForKey;
}


@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections; // ivar: _adjustmentInfoSections
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUCropPerspectiveAdjustmentsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastAdjustmentLocalizedName; // ivar: _lastAdjustmentLocalizedName
@property (readonly) Class superclass;
@property (retain, nonatomic) PEValuesCalculator *valuesCalculator; // ivar: _valuesCalculator


-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_geometryAdjustmentInfos;
-(id)_newAdjustmentInfoWithAdjustmentKey:(id)arg0 settingKey:(id)arg1 attributeKey:(id)arg2 ;
-(id)_newAdjustmentInfoWithIdentifier:(id)arg0 adjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3 ;
-(id)infoForItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)renderer;
-(void)_createAdjustmentInfos;
-(void)_enableNonAutoAjustments:(BOOL)arg0 ;
-(void)_modifyAdjustmentForInfo:(id)arg0 ;
-(void)_setDefaultsForInfo:(id)arg0 ;
-(void)_updateAdjustmentInfos;
-(void)beginInteractiveChange;
-(void)endInteractiveChange;
-(void)modifyValue:(CGFloat)arg0 atIndexPath:(id)arg1 ;
-(void)resetInfoAtIndexPath:(id)arg0 ;
-(void)setAdjustmentEnabled:(BOOL)arg0 atIndexPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setupWithCompositionController:(id)arg0 valuesCalculator:(id)arg1 ;


@end


#endif