// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NAOBSERVERPROXY_H
#define _NAOBSERVERPROXY_H


#import <Foundation/Foundation.h>


@interface _NAObserverProxy : NSObject

@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid
@property (readonly, weak, nonatomic) id *weakObserver; // ivar: _weakObserver


-(id)initWithWeakObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif