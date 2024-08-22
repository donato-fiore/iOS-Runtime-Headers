// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKCLIPSUGGESTION_H
#define VEKCLIPSUGGESTION_H

@protocol VEKClipProtocol;


#import "VEKRangeSuggestion.h"

@interface VEKClipSuggestion : VEKRangeSuggestion

@property (retain, nonatomic) NSObject<VEKClipProtocol> *clip; // ivar: _clip


-(id)description;
-(id)initWithClipToEmulate:(id)arg0 ;


@end


#endif