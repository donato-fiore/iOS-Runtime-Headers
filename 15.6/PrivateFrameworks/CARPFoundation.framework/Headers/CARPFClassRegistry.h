// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFCLASSREGISTRY_H
#define CARPFCLASSREGISTRY_H

@class NSMutableDictionary;


#import "CARPFObject.h"

@interface CARPFClassRegistry : CARPFObject {
    carpf_unfair_data_lock_s _lock;
    NSMutableDictionary *_classes;
}


@property (readonly, nonatomic) Class defaultClass; // ivar: _defaultClass


-(Class)classForKey:(id)arg0 ;
-(id)init;
-(id)initWithDefaultClass:(Class)arg0 ;
-(void)setClass:(Class)arg0 forKey:(id)arg1 ;


@end


#endif