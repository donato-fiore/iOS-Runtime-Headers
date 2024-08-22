// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUISPINNERMANAGER_H
#define AAUISPINNERMANAGER_H

@class NSMutableDictionary, UINavigationItem;

#import <Foundation/Foundation.h>


@interface AAUISpinnerManager : NSObject {
    NSMutableDictionary *_spinnerControllers;
    os_unfair_lock_s _controllersLock;
    UINavigationItem *_navItem;
}




-(id)init;
-(id)initWithNavigationItem:(id)arg0 ;
-(void)startNavigationSpinner;
-(void)startSpinnerInSpecifier:(id)arg0 forKey:(id)arg1 ;
-(void)stopAllSpinners;
-(void)stopAnimatingForKey:(id)arg0 ;
-(void)stopNavigationSpinner;


@end


#endif