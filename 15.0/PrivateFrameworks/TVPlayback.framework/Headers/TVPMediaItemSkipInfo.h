// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPMEDIAITEMSKIPINFO_H
#define TVPMEDIAITEMSKIPINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVPMediaItemSkipInfo : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) NSString *skipIntroReportingType; // ivar: _skipIntroReportingType
@property (readonly, nonatomic) CGFloat start; // ivar: _start
@property (readonly, nonatomic) CGFloat target; // ivar: _target
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSUInteger)arg0 start:(CGFloat)arg1 duration:(CGFloat)arg2 target:(CGFloat)arg3 localizedTitle:(id)arg4 skipIntroReportingType:(id)arg5 ;


@end


#endif