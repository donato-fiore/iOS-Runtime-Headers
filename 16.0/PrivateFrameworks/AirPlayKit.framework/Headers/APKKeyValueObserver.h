// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APKKEYVALUEOBSERVER_H
#define APKKEYVALUEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APKKeyValueObserver : NSObject

@property (readonly, copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) id *observeredObject; // ivar: _observeredObject
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(id)initWithObservedObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 changeHandler:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif