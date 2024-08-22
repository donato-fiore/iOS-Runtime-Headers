// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLARRAY_H
#define TMLARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TMLArray : NSObject

@property (retain, nonatomic) NSArray *array; // ivar: _array
@property (readonly, nonatomic) NSUInteger count;


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(id)get:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(void)append:(id)arg0 ;
-(void)remove:(NSUInteger)arg0 ;
-(void)removeAllObjects;
-(void)set:(NSUInteger)arg0 value:(id)arg1 ;


@end


#endif