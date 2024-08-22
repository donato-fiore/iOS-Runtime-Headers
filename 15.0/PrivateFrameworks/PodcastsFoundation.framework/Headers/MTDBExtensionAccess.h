// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTDBEXTENSIONACCESS_H
#define MTDBEXTENSIONACCESS_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}




+(id)sharedInstance;
-(BOOL)isReady;
-(id)init;
-(void)_handleChange;
-(void)_startObserving;
-(void)_stopObserving;
-(void)addObserver:(id)arg0 ;
-(void)attemptToFix;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif