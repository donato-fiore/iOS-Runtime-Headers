// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSALTER_H
#define _PSALTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PSAlter : NSObject

@property (nonatomic) CGFloat distanceToCluster; // ivar: _distanceToCluster
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat timeSinceLastContact; // ivar: _timeSinceLastContact


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 andDistance:(CGFloat)arg1 andTime:(CGFloat)arg2 ;


@end


#endif