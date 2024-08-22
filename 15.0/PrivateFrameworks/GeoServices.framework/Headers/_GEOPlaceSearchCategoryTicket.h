// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOPLACESEARCHCATEGORYTICKET_H
#define _GEOPLACESEARCHCATEGORYTICKET_H

@class NSString, NSDictionary;
@protocol GEOMapServiceCategoriesTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapServiceTraits.h"

@interface _GEOPlaceSearchCategoryTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCategoriesTicket>



@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif