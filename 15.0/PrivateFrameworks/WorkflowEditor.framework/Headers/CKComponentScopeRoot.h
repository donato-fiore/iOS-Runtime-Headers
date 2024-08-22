// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTSCOPEROOT_H
#define CKCOMPONENTSCOPEROOT_H

@class NSHashTable;
@protocol CKComponentStateListener;

#import <Foundation/Foundation.h>

#import "CKComponentScopeFrame.h"

@interface CKComponentScopeRoot : NSObject {
    unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const CKComponentAnnouncedEvent, CKComponentController *>>> _eventRegistration;
    NSHashTable *_boundsAnimationComponents;
}


@property (readonly, nonatomic) int globalIdentifier; // ivar: _globalIdentifier
@property (readonly, weak, nonatomic) NSObject<CKComponentStateListener> *listener; // ivar: _listener
@property (readonly, nonatomic) CKComponentScopeFrame *rootFrame; // ivar: _rootFrame


+(id)rootWithListener:(id)arg0 ;
-(id)boundsAnimationComponents;
-(id)initWithListener:(id)arg0 globalIdentifier:(int)arg1 ;
-(id)newRoot;
-(struct CKComponentBoundsAnimation )boundsAnimationFromPreviousScopeRoot:(id)arg0 ;
-(void)announceEventToControllers:(NSUInteger)arg0 ;
-(void)registerAnnounceableEventsForController:(id)arg0 ;
-(void)registerBoundsAnimationComponent:(id)arg0 ;


@end


#endif