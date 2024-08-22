// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUADJUSTMENTSDATASOURCE_H
#define PUADJUSTMENTSDATASOURCE_H

@class NSMutableArray, PICompositionController, NSString;
@protocol PUAdjustmentsViewDataSource, PUAdjustmentsDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PUAutoAdjustmentController.h"
#import "PUPhotoEditValuesCalculator.h"

@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource>



@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections; // ivar: _adjustmentInfoSections
@property (nonatomic) NSUInteger assetType; // ivar: _assetType
@property (retain, nonatomic) PUAutoAdjustmentController *autoEnhanceController; // ivar: _autoEnhanceController
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAdjustmentsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // ivar: _valuesCalculator


-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_autoEnhanceAdjustmentInfo;
-(id)_colorAdjustmentInfos;
-(id)_debugAdjustmentInfos;
-(id)_detailAdjustmentInfos;
-(id)_lightAdjustmentInfos;
-(id)_newAdjustmentInfoWithAdjustmentKey:(id)arg0 settingKey:(id)arg1 attributeKey:(id)arg2 ;
-(id)_newAdjustmentInfoWithIdentifier:(id)arg0 adjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3 ;
-(id)_smartBlackAndWhiteAdjustmentInfos;
-(id)_vignetteAdjustmentInfos;
-(id)infoForItemAtIndexPath:(id)arg0 ;
-(id)renderer;
-(void)_createAdjustmentInfos;
-(void)_enableNonAutoAjustments:(BOOL)arg0 ;
-(void)_modifyAdjustmentForInfo:(id)arg0 ;
-(void)_resetEnabledStateForAutoEnhancedInfos;
-(void)_setDefaultsForInfo:(id)arg0 ;
-(void)_updateAdjustmentInfos;
-(void)modifyValue:(CGFloat)arg0 atIndexPath:(id)arg1 ;
-(void)resetInfoAtIndexPath:(id)arg0 ;
-(void)setAdjustmentEnabled:(BOOL)arg0 atIndexPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupWithCompositionController:(id)arg0 valuesCalculator:(id)arg1 autoAdjustmentController:(id)arg2 assetType:(NSUInteger)arg3 ;


@end


#endif