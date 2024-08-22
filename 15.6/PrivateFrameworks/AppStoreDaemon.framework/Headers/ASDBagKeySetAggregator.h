// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDBAGKEYSETAGGREGATOR_H
#define ASDBAGKEYSETAGGREGATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ASDBagKeySetAggregator : NSObject {
    NSMutableDictionary *_bagKeySets;
}




-(BOOL)hasBagKeySetForConsumer:(Class)arg0 ;
-(id)generateAggregatedBagKeySet;
-(id)init;
-(void)addBagKeySet:(id)arg0 forConsumer:(Class)arg1 ;


@end


#endif