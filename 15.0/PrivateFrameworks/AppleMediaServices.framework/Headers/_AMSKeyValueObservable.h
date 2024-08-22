// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AMSKEYVALUEOBSERVABLE_H
#define _AMSKEYVALUEOBSERVABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSObservable.h"

@interface _AMSKeyValueObservable : AMSObservable

@property (retain, nonatomic) NSObject *context; // ivar: _context
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (weak, nonatomic) NSObject *object; // ivar: _object


-(BOOL)cancel;
-(BOOL)sendCompletion;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif