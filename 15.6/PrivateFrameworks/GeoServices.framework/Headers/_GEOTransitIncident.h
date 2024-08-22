// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITINCIDENT_H
#define _GEOTRANSITINCIDENT_H

@class NSArray, NSDate, NSString;
@protocol GEOTransitIncident, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOPBTransitIncident.h"

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding>

 {
    GEOPBTransitIncident *_incident;
}


@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncident:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif