// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVENUEFILTERITEM_H
#define GEOVENUEFILTERITEM_H

@protocol GEOVenueFilterItem, GEOVenueIdentifier, GEOVenueLabel;

#import <Foundation/Foundation.h>


@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem>



@property (readonly, nonatomic) BOOL describesParentVenue; // ivar: _describesParentVenue
@property (readonly, nonatomic) NSObject<GEOVenueIdentifier> *filterID; // ivar: _filterID
@property (readonly, nonatomic) NSObject<GEOVenueLabel> *label; // ivar: _label


-(id)init;
-(id)initWithFilterElementInfo:(id)arg0 ;
-(id)initWithLabel:(id)arg0 filterID:(id)arg1 ;


@end


#endif