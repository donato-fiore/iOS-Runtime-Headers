// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVENUESEARCHFILTER_H
#define GEOVENUESEARCHFILTER_H

@protocol GEOSearchFilter, GEOVenueIdentifier;

#import <Foundation/Foundation.h>


@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>



@property (readonly, nonatomic) NSObject<GEOVenueIdentifier> *identifier; // ivar: _identifier


-(BOOL)applyToSearchParameters:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif