// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCFUTUREINVALIDATIONTOKEN_H
#define MPCFUTUREINVALIDATIONTOKEN_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPCFuture.h"

@interface MPCFutureInvalidationToken : NSObject <NSCopying>



@property (retain, nonatomic) MPCFuture *future; // ivar: _future


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif