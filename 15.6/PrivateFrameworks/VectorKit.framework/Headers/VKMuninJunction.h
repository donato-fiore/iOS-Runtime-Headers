// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKMUNINJUNCTION_H
#define VKMUNINJUNCTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VKMuninJunction : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *roads; // ivar: _roads


-(id)description;
-(id)initWithMuninJunction:(*void)arg0 localize:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif