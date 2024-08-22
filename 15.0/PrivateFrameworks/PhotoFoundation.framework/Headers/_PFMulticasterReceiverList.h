// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFMULTICASTERRECEIVERLIST_H
#define _PFMULTICASTERRECEIVERLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PFMulticasterReceiverList : NSObject {
    id _inlineReceivers;
    NSMutableArray *_extraReceivers;
}


@property (readonly) NSUInteger count; // ivar: _count
@property (readonly) SEL selector; // ivar: _selector


-(BOOL)hasReceivers;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSelector:(SEL)arg0 receivers:(id)arg1 ;
-(id)initWithSelector:(SEL)arg0 receiversHash:(id)arg1 ;
-(void)enumerateReceiversWithBlock:(id)arg0 ;


@end


#endif