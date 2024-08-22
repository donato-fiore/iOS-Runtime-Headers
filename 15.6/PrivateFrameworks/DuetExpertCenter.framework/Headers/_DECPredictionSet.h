// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECPREDICTIONSET_H
#define _DECPREDICTIONSET_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _DECPredictionSet : NSObject {
    NSMutableDictionary *_predictionSet;
}


@property (readonly, nonatomic, getter=allValues) NSArray *allValues;


+(id)createFromResult:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif