// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHCHANGE_H
#define PGGRAPHCHANGE_H


#import <Foundation/Foundation.h>


@interface PGGraphChange : NSObject

@property (readonly, nonatomic) NSUInteger changeCount;
@property (readonly) NSUInteger type;


-(id)description;


@end


#endif