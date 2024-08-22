// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFITEMUPDATEFUTUREWRAPPER_H
#define _HFITEMUPDATEFUTUREWRAPPER_H

@class NAFuture;

#import <Foundation/Foundation.h>

#import "HFItem.h"
#import "HFItemUpdateOutcome.h"

@interface _HFItemUpdateFutureWrapper : NSObject

@property (retain, nonatomic) NAFuture *future; // ivar: _future
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HFItemUpdateOutcome *outcome; // ivar: _outcome


+(id)futuresFromWrappers:(id)arg0 ;
+(id)wrapperWithFuture:(id)arg0 item:(id)arg1 isInternal:(BOOL)arg2 ;


@end


#endif