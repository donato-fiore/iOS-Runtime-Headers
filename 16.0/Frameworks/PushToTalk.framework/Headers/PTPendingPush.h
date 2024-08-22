// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTPENDINGPUSH_H
#define PTPENDINGPUSH_H

@class NSDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface PTPendingPush : NSObject

@property (retain, nonatomic) NSDictionary *payload; // ivar: _payload
@property (copy, nonatomic) id *reply; // ivar: _reply
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid




@end


#endif