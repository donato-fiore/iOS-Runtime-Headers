// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDVIPMANAGERPROXY_H
#define EDVIPMANAGERPROXY_H

@class NSMapTable, NSSet, NSString;
@protocol EMVIPManagerInterface;

#import <Foundation/Foundation.h>

#import "EDVIPManager.h"

@interface EDVIPManagerProxy : NSObject <EMVIPManagerInterface>

 {
    os_unfair_lock_s _observersLock;
    NSMapTable *_observersByIdentifier;
}


@property (readonly, copy, nonatomic) NSSet *allVIPWaitForResult; // ivar: allVIPWaitForResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDVIPManager *vipManager; // ivar: _vipManager


-(id)initWithVIPManager:(id)arg0 ;
-(void)_vipsDidChange:(id)arg0 ;
-(void)cancelObservation:(id)arg0 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 observationIdentifier:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg0 ;
-(void)removeVIPsWithIdentifiers:(id)arg0 ;
-(void)saveVIPs:(id)arg0 ;


@end


#endif