// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAWORKINPROGRESSACCESSINTERVAL_H
#define PAWORKINPROGRESSACCESSINTERVAL_H


#import <Foundation/Foundation.h>

#import "PAAccess.h"

@interface PAWorkInProgressAccessInterval : NSObject

@property (retain, nonatomic) PAAccess *access; // ivar: _access
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(id)asSealedRecord;
-(id)init;


@end


#endif