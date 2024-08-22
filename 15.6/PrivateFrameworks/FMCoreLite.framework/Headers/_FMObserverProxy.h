// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FMOBSERVERPROXY_H
#define _FMOBSERVERPROXY_H


#import <Foundation/Foundation.h>


@interface _FMObserverProxy : NSObject

@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid
@property (readonly, weak, nonatomic) id *weakObserver; // ivar: _weakObserver


-(id)initWithWeakObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif