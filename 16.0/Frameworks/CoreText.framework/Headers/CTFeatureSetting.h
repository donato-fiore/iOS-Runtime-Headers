// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTFEATURESETTING_H
#define CTFEATURESETTING_H

@class NSDictionary;



@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}




-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(id)initWithDictionary:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif