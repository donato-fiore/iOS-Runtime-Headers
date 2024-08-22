// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESPATIALPIPELINEENTRY_H
#define PHASESPATIALPIPELINEENTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PHASENumberMetaParameterDefinition.h"

@interface PHASESpatialPipelineEntry : NSObject

@property (nonatomic) CGFloat sendLevel; // ivar: _sendLevel
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *sendLevelMetaParameterDefinition; // ivar: _sendLevelMetaParameterDefinition
@property (retain, nonatomic) NSMutableDictionary *tweakParams; // ivar: _tweakParams


-(id)init;
-(void)setTweakParameterWithMetaParameterDefinition:(id)arg0 identifier:(id)arg1 ;
-(void)setTweakParameterWithMetaParameterDefinition:(id)arg0 uid:(id)arg1 ;
-(void)setTweakParameterWithValue:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)setTweakParameterWithValue:(CGFloat)arg0 uid:(id)arg1 ;


@end


#endif