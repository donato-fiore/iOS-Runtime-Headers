// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAREMOTEEFFECTGROUP_H
#define CAREMOTEEFFECTGROUP_H

@class NSArray, NSString;


#import "CARemoteEffect.h"

@interface CARemoteEffectGroup : CARemoteEffect

@property (copy) NSArray *effects; // ivar: _effects
@property (copy) NSString *groupName; // ivar: _groupName
@property (getter=isMatched) BOOL matched; // ivar: _matched
@property (getter=isSource) BOOL source; // ivar: _source


+(BOOL)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg0 ;
+(id)groupWithEffects:(id)arg0 ;
-(*void)_copyRenderRemoteEffectForLayer:(*void)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(*void)arg0 layer:(*void)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 preservingEffectId:(BOOL)arg1 ;
-(id)init;
-(id)initWithEffects:(id)arg0 ;
-(id)name;
-(void)dealloc;


@end


#endif