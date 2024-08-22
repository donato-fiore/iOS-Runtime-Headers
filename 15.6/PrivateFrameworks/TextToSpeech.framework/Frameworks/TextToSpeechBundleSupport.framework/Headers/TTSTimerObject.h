// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSTIMEROBJECT_H
#define TTSTIMEROBJECT_H


#import <Foundation/Foundation.h>


@interface TTSTimerObject : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) NSInteger intId; // ivar: _intId
@property (nonatomic) CGFloat remainingTime; // ivar: _remainingTime


-(id)description;
-(void)dealloc;


@end


#endif