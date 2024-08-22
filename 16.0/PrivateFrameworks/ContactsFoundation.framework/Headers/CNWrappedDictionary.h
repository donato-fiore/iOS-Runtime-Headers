// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNWRAPPEDDICTIONARY_H
#define CNWRAPPEDDICTIONARY_H

@class NSDictionary;



@interface CNWrappedDictionary : NSDictionary {
    NSDictionary *_underlyingDictionary;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;


@end


#endif