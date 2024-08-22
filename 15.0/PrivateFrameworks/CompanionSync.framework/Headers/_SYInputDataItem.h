// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SYINPUTDATAITEM_H
#define _SYINPUTDATAITEM_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface _SYInputDataItem : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) NSMutableData *data; // ivar: _data
@property (nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger lengthRemaining;
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock


-(id)initWithLength:(NSUInteger)arg0 callback:(id)arg1 ;


@end


#endif