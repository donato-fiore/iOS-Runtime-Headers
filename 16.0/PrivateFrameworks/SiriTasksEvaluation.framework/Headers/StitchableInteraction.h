// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STITCHABLEINTERACTION_H
#define STITCHABLEINTERACTION_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface StitchableInteraction : NSObject

@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isDonatedBySiri; // ivar: _isDonatedBySiri
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 identifier:(id)arg1 startDate:(id)arg2 duration:(CGFloat)arg3 isDonatedBySiri:(BOOL)arg4 ;


@end


#endif