// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BCUCOVEREFFECTSASSETS_H
#define _BCUCOVEREFFECTSASSETS_H


#import <Foundation/Foundation.h>


@interface _BCUCoverEffectsAssets : NSObject

@property (readonly, nonatomic) *CGImage edges; // ivar: _edges
@property (readonly, nonatomic) *CGColor overlayColor; // ivar: _overlayColor
@property (readonly, nonatomic) *CGImage spineLinearBurnBlend; // ivar: _spineLinearBurnBlend
@property (readonly, nonatomic) *CGImage spineNormalBlend; // ivar: _spineNormalBlend
@property (readonly, nonatomic) *CGImage spineSoftLightBlend; // ivar: _spineSoftLightBlend


-(id)initWithBundle:(id)arg0 rtl:(BOOL)arg1 night:(BOOL)arg2 ;
-(id)initWithBundle:(id)arg0 rtl:(BOOL)arg1 night:(BOOL)arg2 small:(BOOL)arg3 ;


@end


#endif