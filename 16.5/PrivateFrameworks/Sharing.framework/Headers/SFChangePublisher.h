// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCHANGEPUBLISHER_H
#define SFCHANGEPUBLISHER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers; // ivar: _observers


-(id)init;
-(void)publishChangeDescriptor:(NSUInteger)arg0 forObservable:(id)arg1 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif