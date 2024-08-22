// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKDIFFMESSAGERESULT_H
#define NNMKDIFFMESSAGERESULT_H

@class NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface NNMKDiffMessageResult : NSObject

@property (retain, nonatomic) NSMutableSet *messageIdsToAddToWatch; // ivar: _messageIdsToAddToWatch
@property (retain, nonatomic) NSMutableSet *messageIdsToDeleteFromWatch; // ivar: _messageIdsToDeleteFromWatch
@property (retain, nonatomic) NSMutableSet *messageIdsToUpdateOnWatch; // ivar: _messageIdsToUpdateOnWatch
@property (retain, nonatomic) NSArray *messageToAddToWatch; // ivar: _messageToAddToWatch
@property (nonatomic) BOOL trimed; // ivar: _trimed




@end


#endif