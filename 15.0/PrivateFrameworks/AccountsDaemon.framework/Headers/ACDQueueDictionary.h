// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDQUEUEDICTIONARY_H
#define ACDQUEUEDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary *_allQueuesByID;
}




-(BOOL)isEmpty;
-(BOOL)isQueueEmptyForKey:(id)arg0 ;
-(id)dequeueAllObjectsInQueueForKey:(id)arg0 ;
-(id)dequeueFirstObjectInQueueForKey:(id)arg0 ;
-(id)description;
-(id)firstObjectInQueueForKey:(id)arg0 ;
-(id)init;
-(id)keyForRandomQueue;
-(void)addObject:(id)arg0 toQueueForKey:(id)arg1 ;


@end


#endif