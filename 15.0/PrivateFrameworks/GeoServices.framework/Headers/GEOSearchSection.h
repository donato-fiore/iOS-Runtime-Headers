// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHSECTION_H
#define GEOSEARCHSECTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOSearchSectionGuide.h"
#import "GEOSearchSectionPlace.h"

@interface GEOSearchSection : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) GEOSearchSectionGuide *sectionGuide; // ivar: _sectionGuide
@property (readonly, nonatomic) GEOSearchSectionPlace *sectionPlace; // ivar: _sectionPlace
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType


-(id)init;
-(id)initWithSearchSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif