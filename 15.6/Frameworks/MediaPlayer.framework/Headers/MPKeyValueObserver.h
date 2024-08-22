// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPKEYVALUEOBSERVER_H
#define MPKEYVALUEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPKeyValueObserver : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) id *object; // ivar: _object


-(id)initWithObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif