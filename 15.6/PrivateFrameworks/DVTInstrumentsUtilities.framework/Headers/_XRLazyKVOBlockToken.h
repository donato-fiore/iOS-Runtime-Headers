// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _XRLAZYKVOBLOCKTOKEN_H
#define _XRLAZYKVOBLOCKTOKEN_H

@class NSString;
@protocol XRLazyKVOResponder;

#import <Foundation/Foundation.h>


@interface _XRLazyKVOBlockToken : NSObject <XRLazyKVOResponder>

 {
    id *_object;
    id *_observer;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObject:(id)arg0 observer:(id)arg1 ;
-(void)handleLazyKVOUpdate:(id)arg0 ;


@end


#endif