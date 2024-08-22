// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAJOBCOALESCER_H
#define PHAJOBCOALESCER_H

@protocol PHAJobCoalescerDelegate;

#import <Foundation/Foundation.h>


@interface PHAJobCoalescer : NSObject

@property (weak, nonatomic) NSObject<PHAJobCoalescerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)addJob:(id)arg0 ;


@end


#endif