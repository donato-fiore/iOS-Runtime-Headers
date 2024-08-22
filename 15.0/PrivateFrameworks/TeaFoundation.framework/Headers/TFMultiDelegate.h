// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFMULTIDELEGATE_H
#define TFMULTIDELEGATE_H

@class NSHashTable, Protocol;

#import <Foundation/Foundation.h>


@interface TFMultiDelegate : NSObject

@property (readonly, nonatomic) NSHashTable *children; // ivar: _children
@property (readonly, nonatomic) id *delegate;
@property (readonly, nonatomic) Protocol *delegateProtocol; // ivar: _delegateProtocol


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 delegateProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)replaceDelegate:(id)arg0 withDelegate:(id)arg1 ;


@end


#endif