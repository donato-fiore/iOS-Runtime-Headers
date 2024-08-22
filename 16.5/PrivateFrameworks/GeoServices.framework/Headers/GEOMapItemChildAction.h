// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMCHILDACTION_H
#define GEOMAPITEMCHILDACTION_H


#import <Foundation/Foundation.h>

#import "GEOMapItemChildActionSearch.h"
#import "GEOGuideLocation.h"

@interface GEOMapItemChildAction : NSObject

@property (retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch; // ivar: _childActionSearch
@property (nonatomic) NSInteger childActionType; // ivar: _childActionType
@property (readonly, nonatomic) GEOGuideLocation *guideLocation; // ivar: _guideLocation


-(id)initWithChildAction:(id)arg0 ;


@end


#endif