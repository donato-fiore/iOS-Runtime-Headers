// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSPOTLIGHTSESSIONSTATE_H
#define PPSPOTLIGHTSESSIONSTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPSpotlightSessionState : NSObject

@property (retain, nonatomic) NSMutableArray *engagedBundleIds; // ivar: _engagedBundleIds
@property (retain, nonatomic) NSMutableArray *engagedSpotlightIds; // ivar: _engagedSpotlightIds
@property (retain, nonatomic) NSMutableArray *seenBundleIds; // ivar: _seenBundleIds
@property (retain, nonatomic) NSMutableArray *seenSpotlightIds; // ivar: _seenSpotlightIds


-(id)init;


@end


#endif