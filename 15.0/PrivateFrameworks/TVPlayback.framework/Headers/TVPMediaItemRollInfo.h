// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPMEDIAITEMROLLINFO_H
#define TVPMEDIAITEMROLLINFO_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface TVPMediaItemRollInfo : NSObject

@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic, getter=isSkippable) BOOL skippable; // ivar: _skippable
@property (readonly, nonatomic) CGFloat start; // ivar: _start
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSUInteger)arg0 start:(CGFloat)arg1 duration:(CGFloat)arg2 ;


@end


#endif