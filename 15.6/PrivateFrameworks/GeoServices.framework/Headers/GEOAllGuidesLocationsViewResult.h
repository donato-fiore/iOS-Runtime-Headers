// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOALLGUIDESLOCATIONSVIEWRESULT_H
#define GEOALLGUIDESLOCATIONSVIEWRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDAllGuidesLocationsViewResult.h"

@interface GEOAllGuidesLocationsViewResult : NSObject {
    GEOPDAllGuidesLocationsViewResult *_viewResult;
    NSArray *_mapsResults;
}


@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSString *title;


-(id)initWithAllGuidesLocationsViewResult:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif