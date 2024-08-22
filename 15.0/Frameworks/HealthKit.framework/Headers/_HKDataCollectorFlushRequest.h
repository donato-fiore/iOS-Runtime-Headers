// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKDATACOLLECTORFLUSHREQUEST_H
#define _HKDATACOLLECTORFLUSHREQUEST_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _HKDataCollectorFlushRequest : NSObject

@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date


-(id)initWithDate:(id)arg0 completion:(id)arg1 ;


@end


#endif