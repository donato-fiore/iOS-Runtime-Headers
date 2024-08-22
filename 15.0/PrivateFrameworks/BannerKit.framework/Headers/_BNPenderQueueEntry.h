// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BNPENDERQUEUEENTRY_H
#define _BNPENDERQUEUEENTRY_H

@class NSUUID;
@protocol BNPending;

#import <Foundation/Foundation.h>


@interface _BNPenderQueueEntry : NSObject

@property (readonly, nonatomic) NSUUID *entryIdentifier; // ivar: _entryIdentifier
@property (readonly, nonatomic) NSObject<BNPending> *pender; // ivar: _pender


-(id)initWithPender:(id)arg0 ;


@end


#endif