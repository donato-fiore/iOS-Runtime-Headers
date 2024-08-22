// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTCOUNTER_H
#define HMDEVENTCOUNTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HMDEventCounter : NSObject

@property NSUInteger count; // ivar: _count
@property (retain) NSArray *observers; // ivar: _observers


-(id)init;
-(id)initWithCount:(NSUInteger)arg0 ;


@end


#endif