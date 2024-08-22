// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVKEYVALUEOBSERVER_H
#define SVKEYVALUEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SVKeyValueObserver : NSObject

@property (readonly, copy, nonatomic) id *change; // ivar: _change
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) NSObject *object; // ivar: _object
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(id)initWithKeyPath:(id)arg0 ofObject:(id)arg1 withOptions:(NSUInteger)arg2 change:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif