// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INEXECUTIONCOUNTERPARTMAPPER_H
#define INEXECUTIONCOUNTERPARTMAPPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface INExecutionCounterpartMapper : NSObject

@property (readonly, nonatomic) BOOL _filled; // ivar: _filled
@property (readonly, nonatomic) os_unfair_lock_s _lock; // ivar: _lock
@property (readonly, copy, nonatomic) NSMutableDictionary *_mapping; // ivar: _mapping


+(void)initialize;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg0 ;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg0 ;
-(id)init;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)installedApplicationsDidChange:(id)arg0 ;
-(void)reset;


@end


#endif