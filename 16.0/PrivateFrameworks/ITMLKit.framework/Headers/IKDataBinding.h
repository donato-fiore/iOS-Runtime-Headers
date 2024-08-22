// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDATABINDING_H
#define IKDATABINDING_H

@class NSDictionary, NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface IKDataBinding : NSObject {
    NSDictionary *_entriesByKey;
    NSMutableSet *_unresolvedKeys;
}


@property (readonly, nonatomic) NSSet *dataBoundKeys; // ivar: _dataBoundKeys
@property (copy, nonatomic) NSDictionary *keyValues; // ivar: _keyValues
@property (readonly, nonatomic) NSSet *unresolvedKeys;


-(id)dataBoundKeysWithAnyOfAttributes:(NSUInteger)arg0 ;
-(id)initWithEntries:(id)arg0 ;
-(id)keysWithAnyOfAttributes:(NSUInteger)arg0 ;
-(id)unresolvedKeysWithAnyOfAttributes:(NSUInteger)arg0 ;
-(void)markResolvedForKey:(id)arg0 ;
-(void)setNeedsResolutionForAllKeys;
-(void)setNeedsResolutionForKey:(id)arg0 ;


@end


#endif