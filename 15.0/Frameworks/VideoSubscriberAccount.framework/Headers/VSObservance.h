// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSOBSERVANCE_H
#define VSOBSERVANCE_H

@class NSString;
@protocol VSObservanceDelegate;

#import <Foundation/Foundation.h>


@interface VSObservance : NSObject

@property (weak, nonatomic) NSObject<VSObservanceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) id *object; // ivar: _object
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(id)init;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif