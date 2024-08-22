// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESULTREFINEMENTGROUP_H
#define GEORESULTREFINEMENTGROUP_H


#import <Foundation/Foundation.h>

#import "GEOPDRefinementSessionState.h"
#import "GEOResultRefinementBar.h"
#import "GEOResultRefinementView.h"

@interface GEOResultRefinementGroup : NSObject

@property (retain, nonatomic) GEOPDRefinementSessionState *refinementSessionState; // ivar: _refinementSessionState
@property (retain, nonatomic) GEOResultRefinementBar *resultRefinementBar; // ivar: _resultRefinementBar
@property (retain, nonatomic) GEOResultRefinementView *resultRefinementView; // ivar: _resultRefinementView


-(id)initWithResultRefinementBar:(id)arg0 resultRefinementView:(id)arg1 refinementSessionState:(id)arg2 ;
-(id)initWithResultRefinementGroup:(id)arg0 ;


@end


#endif