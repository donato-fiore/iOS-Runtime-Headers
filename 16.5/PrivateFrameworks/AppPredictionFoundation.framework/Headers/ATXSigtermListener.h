// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSIGTERMLISTENER_H
#define ATXSIGTERMLISTENER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(id)init;
-(void)_notifyObserversOfSigterm;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif