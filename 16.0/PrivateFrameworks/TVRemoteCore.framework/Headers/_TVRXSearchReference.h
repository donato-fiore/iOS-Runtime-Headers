// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRXSEARCHREFERENCE_H
#define _TVRXSEARCHREFERENCE_H

@class NSTimer, NSString;

#import <Foundation/Foundation.h>


@interface _TVRXSearchReference : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (weak, nonatomic) NSTimer *expirationTimer; // ivar: _expirationTimer
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier




@end


#endif