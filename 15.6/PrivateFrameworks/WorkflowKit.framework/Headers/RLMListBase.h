// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMLISTBASE_H
#define RLMLISTBASE_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "RLMArray.h"

@interface RLMListBase : NSObject <NSFastEnumeration>

 {
    unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>> _observationInfo;
}


@property (retain, nonatomic) RLMArray *_rlmArray; // ivar: __rlmArray


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithArray:(id)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;


@end


#endif