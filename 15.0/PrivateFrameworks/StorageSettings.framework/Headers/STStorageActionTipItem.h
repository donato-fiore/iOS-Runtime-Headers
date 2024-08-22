// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTORAGEACTIONTIPITEM_H
#define STSTORAGEACTIONTIPITEM_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface STStorageActionTipItem : NSObject

@property (retain) NSDate *createdDate; // ivar: _createdDate
@property (retain) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (getter=isRecoverable) BOOL recoverable; // ivar: _recoverable
@property NSInteger size; // ivar: _size




@end


#endif