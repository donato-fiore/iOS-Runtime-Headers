// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNROUTEDIVERGENCERESULTS_H
#define MNROUTEDIVERGENCERESULTS_H

@class NSArray, NSUUID;

#import <Foundation/Foundation.h>


@interface MNRouteDivergenceResults : NSObject

@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) NSUUID *routeID; // ivar: _routeID


-(id)description;


@end


#endif