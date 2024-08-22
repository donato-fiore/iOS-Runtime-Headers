// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTENTEFFECTMANAGER_H
#define _UICONTENTEFFECTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIContentEffectManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *effects; // ivar: _effects


+(id)sharedManager;
-(id)compatibleEffectForDescriptor:(id)arg0 ;
-(id)compatibleEffectForKey:(id)arg0 descriptor:(id)arg1 constructor:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_stopManagingEffect:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif