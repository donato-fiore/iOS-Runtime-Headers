// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLDICTIONARY_H
#define TMLDICTIONARY_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TMLDictionary : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSArray *keys;


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(id)get:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)union:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)set:(id)arg0 value:(id)arg1 ;


@end


#endif