// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPLAYERDELEGATEPROXY_H
#define TPLAYERDELEGATEPROXY_H

@class NSString;
@protocol CALayerDelegate, TPLayerDelegateProxyDelegate;

#import <Foundation/Foundation.h>


@interface TPLayerDelegateProxy : NSObject <CALayerDelegate>

 {
    id<TPLayerDelegateProxyDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)clearDelegate;
-(void)displayLayer:(id)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif