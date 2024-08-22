// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBSDEALLOCATIONSENTINEL_H
#define _WBSDEALLOCATIONSENTINEL_H

@protocol WBSDeallocationSentinelObserver;

#import <Foundation/Foundation.h>


@interface _WBSDeallocationSentinel : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<WBSDeallocationSentinelObserver> *observer; // ivar: _observer


-(id)initWithObserver:(id)arg0 context:(id)arg1 ;
-(void)dealloc;


@end


#endif