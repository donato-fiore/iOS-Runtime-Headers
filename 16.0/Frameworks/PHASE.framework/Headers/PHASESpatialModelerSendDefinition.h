// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESPATIALMODELERSENDDEFINITION_H
#define PHASESPATIALMODELERSENDDEFINITION_H

@class NSMutableDictionary;


#import "PHASEDefinition.h"
#import "PHASENumberMetaParameterDefinition.h"

@interface PHASESpatialModelerSendDefinition : PHASEDefinition

@property (nonatomic) CGFloat sendLevel; // ivar: _sendLevel
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendMetaParameterDefinition; // ivar: _sendMetaParameterDefinition
@property (readonly, nonatomic) NSInteger spatialModelerType; // ivar: _spatialModelerType
@property (retain, nonatomic) NSMutableDictionary *tweakParams; // ivar: _tweakParams


+(id)new;
-(id)init;
-(id)initWithSpatialModelerType:(NSInteger)arg0 ;
-(id)initWithSpatialModelerType:(NSInteger)arg0 uid:(id)arg1 ;
-(void)setTweakParameterWithMetaParameterDefinition:(id)arg0 uid:(id)arg1 ;
-(void)setTweakParameterWithValue:(CGFloat)arg0 uid:(id)arg1 ;


@end


#endif