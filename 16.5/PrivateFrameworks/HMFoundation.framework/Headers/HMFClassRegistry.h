// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFCLASSREGISTRY_H
#define HMFCLASSREGISTRY_H

@class NSMutableDictionary;


#import "HMFObject.h"

@interface HMFClassRegistry : HMFObject {
    hmf_unfair_data_lock_s _lock;
    NSMutableDictionary *_classes;
}


@property (readonly, nonatomic) Class defaultClass; // ivar: _defaultClass


-(Class)classForKey:(id)arg0 ;
-(id)init;
-(id)initWithDefaultClass:(Class)arg0 ;
-(void)setClass:(Class)arg0 forKey:(id)arg1 ;


@end


#endif