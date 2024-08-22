// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFMIDSMESSAGEINSTANCE_H
#define NFMIDSMESSAGEINSTANCE_H


#import <Foundation/Foundation.h>


@interface NFMIDSMessageInstance : NSObject

@property (copy, nonatomic) id *retryAction; // ivar: _retryAction
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (nonatomic) CGFloat retryInterval; // ivar: _retryInterval


// +(id)newMessageInstanceWithAction:(id)arg0 retryCount:(unk)arg1 retryInterval:(NSInteger)arg2  ;
-(id)description;


@end


#endif