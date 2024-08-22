// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOPLACEPHOTOLOOKUPTICKET_H
#define _GEOPLACEPHOTOLOOKUPTICKET_H

@class NSString;
@protocol GEOMapServicePhotoLookupTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOMapItemIdentifier.h"
#import "GEOMapServiceTraits.h"

@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket>

 {
    NSString *_vendorIdentifier;
    GEOMapItemIdentifier *_mapItemIdentifier;
    _NSRange _range;
    GEOMapServiceTraits *_traits;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVendorIdentifier:(id)arg0 mapItemIdentifier:(id)arg1 range:(struct _NSRange )arg2 traits:(id)arg3 ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif