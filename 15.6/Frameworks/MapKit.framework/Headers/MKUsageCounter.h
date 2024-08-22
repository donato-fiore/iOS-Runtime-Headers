// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUSAGECOUNTER_H
#define MKUSAGECOUNTER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface MKUsageCounter : NSObject {
    NSMutableSet *_countedEventsSet;
}




+(id)sharedCounter;
-(id)fieldNameForType:(NSUInteger)arg0 ;
-(void)count:(NSUInteger)arg0 ;
-(void)countUsageOfTypeIfNeeded:(NSUInteger)arg0 ;
-(void)createCountedEventsSetIfNeeded;


@end


#endif