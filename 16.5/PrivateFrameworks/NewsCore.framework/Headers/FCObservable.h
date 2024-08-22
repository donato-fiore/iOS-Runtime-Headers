// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCOBSERVABLE_H
#define FCOBSERVABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface FCObservable : NSObject

@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (nonatomic) NSUInteger token; // ivar: _token
@property (retain, nonatomic) id *value; // ivar: _value


-(id)init;
-(id)initWithValue:(id)arg0 ;
-(id)observe:(id)arg0 ;
-(void)dealloc;
-(void)next:(id)arg0 ;
-(void)quietNext:(id)arg0 ;


@end


#endif