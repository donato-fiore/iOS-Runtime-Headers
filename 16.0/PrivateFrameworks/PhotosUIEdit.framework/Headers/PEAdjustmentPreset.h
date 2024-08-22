// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEADJUSTMENTPRESET_H
#define PEADJUSTMENTPRESET_H

@class NUComposition, NSDictionary;


#import "PEEditAction.h"

@interface PEAdjustmentPreset : PEEditAction {
    NUComposition *_composition;
}


@property (readonly, nonatomic) NSInteger autoType;
@property (readonly, nonatomic) NUComposition *composition;
@property (readonly, nonatomic) BOOL isAutoEnhanceEnabled;
@property (readonly, nonatomic) BOOL needsGeometryAdjustments;
@property (readonly, nonatomic) NSDictionary *serializedDictionary; // ivar: _serializedDictionary


+(void)sanitizeCompositionController:(id)arg0 ;
-(BOOL)_isCinematicEditSource:(id)arg0 ;
-(NSInteger)actionType;
-(id)_serializeCompositionController:(id)arg0 ;
-(id)analyticsPayload;
-(id)initWithCompositionController:(id)arg0 ;
-(id)initWithPropertyListDictionary:(id)arg0 ;
-(void)applyToCompositionController:(id)arg0 editSource:(id)arg1 completion:(id)arg2 ;
-(void)applyToCompositionController:(id)arg0 invalidAdjustmentKeys:(id)arg1 completion:(id)arg2 ;
-(void)applyToLoadResult:(id)arg0 completion:(id)arg1 ;


@end


#endif