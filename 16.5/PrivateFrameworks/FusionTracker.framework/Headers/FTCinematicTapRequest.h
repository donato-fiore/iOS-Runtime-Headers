// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCINEMATICTAPREQUEST_H
#define FTCINEMATICTAPREQUEST_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FTCinematicTapRequest : NSObject

@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) CGPoint tapPoint; // ivar: _tapPoint
@property (nonatomic) NSInteger trackId; // ivar: _trackId


-(id)init;


@end


#endif