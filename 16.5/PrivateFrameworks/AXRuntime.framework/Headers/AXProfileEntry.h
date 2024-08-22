// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPROFILEENTRY_H
#define AXPROFILEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXProfileEntry : NSObject

@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (nonatomic) NSInteger attribute; // ivar: _attribute
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) ? uid; // ivar: _uid
@property (nonatomic) NSUInteger valueHash; // ivar: _valueHash
@property (nonatomic) NSUInteger valueSize; // ivar: _valueSize


-(id)description;


@end


#endif