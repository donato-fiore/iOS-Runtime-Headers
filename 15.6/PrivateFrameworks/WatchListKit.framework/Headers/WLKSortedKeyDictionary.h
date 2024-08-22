// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKSORTEDKEYDICTIONARY_H
#define WLKSORTEDKEYDICTIONARY_H

@class NSDictionary;



@interface WLKSortedKeyDictionary : NSDictionary

@property (copy, nonatomic) NSDictionary *underlyingDictionary; // ivar: _underlyingDictionary


-(NSUInteger)count;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;


@end


#endif