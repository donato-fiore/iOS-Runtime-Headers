// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAREMOTEPROPERTYEFFECT_H
#define CAREMOTEPROPERTYEFFECT_H

@class NSString, NSDictionary;


#import "CARemoteEffect.h"

@interface CARemotePropertyEffect : CARemoteEffect

@property (copy) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) NSDictionary *valuesByState; // ivar: _valuesByState


+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 ;
+(id)effectWithKeyPath:(id)arg0 ;
-(*void)_copyRenderRemoteEffectForLayer:(*void)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(*void)arg0 layer:(*void)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 preservingEffectId:(BOOL)arg1 ;
-(id)initWithKeyPath:(id)arg0 ;
-(id)name;
-(id)valueForState:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forState:(id)arg1 ;


@end


#endif