// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARWEAKREFERENCE_H
#define ARWEAKREFERENCE_H

@class NSProxy;



@interface ARWeakReference : NSProxy

@property (readonly, weak, nonatomic) id *object; // ivar: _object


+(id)weakReferenceWithObject:(id)arg0 ;
+(void)_noOp;
-(id)initWithObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif