// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
+(id)groupWithEffects:(id)arg0 ;
-(BOOL)_setCARenderRemoteEffect:(struct RemoteEffect *)arg0 layer:(*void)arg1 ;
-(id)initWithEffects:(id)arg0 ;
-(id)name;
-(struct RemoteEffect *)_copyRenderRemoteEffectForLayer:(*void)arg0 ;


@end


#endif