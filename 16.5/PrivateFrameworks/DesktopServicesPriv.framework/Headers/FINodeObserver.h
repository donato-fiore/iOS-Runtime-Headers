// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINODEOBSERVER_H
#define FINODEOBSERVER_H


#import <Foundation/Foundation.h>

#import "FINode.h"

@interface FINodeObserver : NSObject {
    FINode *_observedNode;
    *OpaqueEventNotifier _notifier;
}




+(id)observerForFINode:(id)arg0 withObserver:(id)arg1 ;
+(id)propertyName:(unsigned int)arg0 ;
-(id)debugDescription;
-(void)dealloc;
-(void)startObserving:(unsigned int)arg0 ;
-(void)stopObserving:(unsigned int)arg0 ;


@end


#endif