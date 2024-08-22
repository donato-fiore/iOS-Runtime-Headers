// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTRIP_H
#define PLTRIP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLTrip : NSObject

@property (readonly) NSArray *items; // ivar: _items
@property (readonly) NSUInteger type; // ivar: _type


-(CGFloat)duration;
-(id)description;
-(id)initWithItems:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif