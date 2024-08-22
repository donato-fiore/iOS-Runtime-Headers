// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAREMOTEEXTERNALEFFECT_H
#define CAREMOTEEXTERNALEFFECT_H

@class NSString, NSDictionary;


#import "CARemoteEffect.h"

@interface CARemoteExternalEffect : CARemoteEffect

@property (copy) NSString *effectName; // ivar: _effectName
@property (retain, nonatomic) NSDictionary *propertiesByState; // ivar: _propertiesByState


+(BOOL)supportsSecureCoding;
+(id)effectWithName:(id)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(struct RemoteEffect *)arg0 layer:(*void)arg1 ;
-(id)name;
-(id)propertiesForState:(id)arg0 ;
-(struct RemoteEffect *)_copyRenderRemoteEffectForLayer:(*void)arg0 ;
-(void)setProperties:(id)arg0 forState:(id)arg1 ;


@end


#endif