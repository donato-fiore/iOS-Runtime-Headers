// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMCHANGEDKEYSOBSERVER_H
#define REMCHANGEDKEYSOBSERVER_H

@class NSSet, NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface REMChangedKeysObserver : NSObject

@property (readonly, nonatomic) NSSet *changedKeys;
@property (retain, nonatomic) NSArray *keysToObserve; // ivar: _keysToObserve
@property (retain, nonatomic) NSMutableSet *mutableChangedKeys; // ivar: _mutableChangedKeys
@property (readonly, nonatomic) NSObject *target; // ivar: _target


-(id)initWithTarget:(id)arg0 keysToObserve:(id)arg1 includeInitial:(BOOL)arg2 ;
-(void)dealloc;
-(void)keyDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif