// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHENABLER_H
#define PGGRAPHENABLER_H


#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph; // ivar: _graph


-(BOOL)locationIsFrequent:(id)arg0 ;
-(BOOL)locationIsNearMyHomeOrWork:(id)arg0 ;
-(id)initWithGraph:(id)arg0 ;


@end


#endif