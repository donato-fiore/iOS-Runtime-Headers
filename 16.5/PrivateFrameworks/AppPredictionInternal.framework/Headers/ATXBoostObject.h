// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBOOSTOBJECT_H
#define ATXBOOSTOBJECT_H


#import <Foundation/Foundation.h>


@interface ATXBoostObject : NSObject

@property (readonly, nonatomic) CGFloat gymBoost; // ivar: _gymBoost
@property (readonly, nonatomic) CGFloat gymScale; // ivar: _gymScale
@property (readonly, nonatomic) CGFloat homeBoost; // ivar: _homeBoost
@property (readonly, nonatomic) CGFloat homeScale; // ivar: _homeScale
@property (readonly, nonatomic) CGFloat schoolBoost; // ivar: _schoolBoost
@property (readonly, nonatomic) CGFloat schoolScale; // ivar: _schoolScale
@property (readonly, nonatomic) CGFloat workBoost; // ivar: _workBoost
@property (readonly, nonatomic) CGFloat workScale; // ivar: _workScale


-(id)initWithDictionary:(id)arg0 ;


@end


#endif