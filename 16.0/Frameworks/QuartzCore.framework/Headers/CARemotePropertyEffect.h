// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAREMOTEPROPERTYEFFECT_H
#define CAREMOTEPROPERTYEFFECT_H

@class NSString, NSDictionary;


#import "CARemoteEffect.h"

@interface CARemotePropertyEffect : CARemoteEffect

@property (copy) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) NSDictionary *valuesByState; // ivar: _valuesByState


+(BOOL)supportsSecureCoding;
+(id)effectWithKeyPath:(id)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(struct RemoteEffect *)arg0 layer:(*void)arg1 ;
-(id)initWithKeyPath:(id)arg0 ;
-(id)name;
-(id)valueForState:(id)arg0 ;
-(struct RemoteEffect *)_copyRenderRemoteEffectForLayer:(*void)arg0 ;
-(void)setValue:(id)arg0 forState:(id)arg1 ;


@end


#endif