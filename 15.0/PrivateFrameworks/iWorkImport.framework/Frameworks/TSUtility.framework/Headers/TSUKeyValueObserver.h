// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUKEYVALUEOBSERVER_H
#define TSUKEYVALUEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSUKeyValueObserver : NSObject {
    id *_target;
    NSString *_keyPath;
    id *_changeHandler;
}




+(id)observerWithTarget:(id)arg0 keyPath:(id)arg1 changeHandler:(id)arg2 ;
+(id)observerWithTarget:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 changeHandler:(id)arg3 ;
-(id)initWithTarget:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 changeHandler:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif