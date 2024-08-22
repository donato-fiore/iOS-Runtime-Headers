// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDESHOMEREPEATABLESECTION_H
#define GEOGUIDESHOMEREPEATABLESECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDGuidesHomeRepeatableSection.h"

@interface GEOGuidesHomeRepeatableSection : NSObject {
    GEOPDGuidesHomeRepeatableSection *_pdRepeatableSection;
    NSArray *_mapsResults;
}


@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, nonatomic) NSArray *curatedGuides;
@property (readonly, nonatomic) NSArray *guideLocations;
@property (readonly, nonatomic) NSArray *publishers;
@property (readonly, nonatomic) NSInteger sectionType;
@property (readonly, nonatomic) NSString *title;


-(id)initWithGuidesHomeRepeatableSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif