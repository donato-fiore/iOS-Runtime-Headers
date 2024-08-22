// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFKEYVALUEOBSERVERHANDLER_H
#define _EFKEYVALUEOBSERVERHANDLER_H

@class NSString;
@protocol EFCancelable;

#import <Foundation/Foundation.h>


@interface _EFKeyValueObserverHandler : NSObject <EFCancelable>

 {
    id *_object;
    NSString *_keyPath;
    id *_block;
    BOOL _observing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObject:(id)arg0 keyPath:(id)arg1 usingBlock:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingWithOptions:(NSUInteger)arg0 ;


@end


#endif