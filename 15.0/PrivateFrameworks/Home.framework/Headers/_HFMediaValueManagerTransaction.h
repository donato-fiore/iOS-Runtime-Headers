// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HFMEDIAVALUEMANAGERTRANSACTION_H
#define _HFMEDIAVALUEMANAGERTRANSACTION_H

@class NSNumber, NAFuture;

#import <Foundation/Foundation.h>


@interface _HFMediaValueManagerTransaction : NSObject

@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (retain, nonatomic) NSNumber *transactionNumber; // ivar: _transactionNumber
@property (retain, nonatomic) NAFuture *writeFuture; // ivar: _writeFuture


-(id)description;
-(id)init;


@end


#endif