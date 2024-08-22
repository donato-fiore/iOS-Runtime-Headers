// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARWEAKREFERENCE_H
#define ARWEAKREFERENCE_H

@class NSProxy;



@interface ARWeakReference : NSProxy

@property (readonly, weak, nonatomic) id *object; // ivar: _object


+(id)weakReferenceWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif