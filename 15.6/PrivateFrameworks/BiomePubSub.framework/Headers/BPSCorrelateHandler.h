// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSCORRELATEHANDLER_H
#define BPSCORRELATEHANDLER_H


#import <Foundation/Foundation.h>


@interface BPSCorrelateHandler : NSObject

@property (retain, nonatomic) id *context; // ivar: _context


+(id)directStreamsAssociationWithBlock:(id)arg0 ;
-(id)correlateWithCurrentEvent:(id)arg0 ;
-(id)init;
-(id)initWithInitalContext:(id)arg0 ;
-(id)initWithInitialContext:(id)arg0 ;
-(void)receiveCurrentEvent:(id)arg0 ;
-(void)receivePriorEvent:(id)arg0 ;
-(void)updateContext:(id)arg0 ;


@end


#endif