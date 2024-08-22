// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMTRACK_H
#define FMTRACK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FMMixParameters.h"

@interface FMTrack : NSObject

@property (retain, nonatomic) NSArray *clips; // ivar: _clips
@property (retain, nonatomic) FMMixParameters *mixParameters; // ivar: _mixParameters


-(id)description;
-(id)initWithClips:(id)arg0 mixParameters:(id)arg1 ;


@end


#endif