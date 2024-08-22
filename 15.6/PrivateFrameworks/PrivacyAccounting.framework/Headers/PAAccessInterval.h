// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAACCESSINTERVAL_H
#define PAACCESSINTERVAL_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "PAAccessLogger.h"

@interface PAAccessInterval : NSObject {
    PAAccessLogger *_logger;
    atomic_flag _wasEnded;
}


@property (readonly, nonatomic) NSNumber *slot; // ivar: _slot


+(id)placeholderAccessInterval;
-(id)description;
-(id)initWithLogger:(id)arg0 slot:(id)arg1 ;
-(void)dealloc;
-(void)end;
-(void)endWithTimestampAdjustment:(CGFloat)arg0 ;


@end


#endif