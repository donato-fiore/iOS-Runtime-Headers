// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAREMOTEEXTERNALEFFECT_H
#define CAREMOTEEXTERNALEFFECT_H

@class NSString, NSDictionary;


#import "CARemoteEffect.h"

@interface CARemoteExternalEffect : CARemoteEffect

@property (copy) NSString *effectName; // ivar: _effectName
@property (retain, nonatomic) NSDictionary *propertiesByState; // ivar: _propertiesByState


+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 ;
+(id)effectWithName:(id)arg0 ;
-(*void)_copyRenderRemoteEffectForLayer:(*void)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(*void)arg0 layer:(*void)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 preservingEffectId:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)name;
-(id)propertiesForState:(id)arg0 ;
-(void)dealloc;
-(void)setProperties:(id)arg0 forState:(id)arg1 ;


@end


#endif