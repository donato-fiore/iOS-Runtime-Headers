// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDROUTEADVISORYITEM_H
#define GEOCOMPOSEDROUTEADVISORYITEM_H

@class NSArray, NSDate;
@protocol NSSecureCoding, NSCopying, GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "GEOPBTransitArtwork.h"

@interface GEOComposedRouteAdvisoryItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *analyticsMessageValues; // ivar: _analyticsMessageValues
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork; // ivar: _artwork
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *attribution; // ivar: _attribution
@property (readonly, nonatomic) NSDate *dateOfLastUpdate; // ivar: _dateOfLastUpdate
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *dateOfLastUpdateDescription; // ivar: _dateOfLastUpdateDescription
@property (readonly, nonatomic) NSArray *details; // ivar: _details
@property (readonly, nonatomic) BOOL isNonTransitIncident; // ivar: _isNonTransitIncident
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_detailsForIncident:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAdvisoryItem:(id)arg0 routeIncidents:(id)arg1 fallbackIcon:(id)arg2 ;
-(id)initWithAdvisoryItem:(id)arg0 transitIncidents:(id)arg1 fallbackIcon:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif