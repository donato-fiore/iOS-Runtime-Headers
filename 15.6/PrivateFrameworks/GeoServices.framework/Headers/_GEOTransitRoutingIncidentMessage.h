// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITROUTINGINCIDENTMESSAGE_H
#define _GEOTRANSITROUTINGINCIDENTMESSAGE_H

@class NSArray, NSString;
@protocol GEOTransitRoutingIncidentMessage, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOPBTransitRoutingIncidentMessage.h"

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding>

 {
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;
    NSArray *_transitIncidents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *routingMessage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *transitIncidents;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_fakeTransitLineIncidentInLine:(id)arg0 ;
-(id)initFakeLineIncidentMessageInLine:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncidentMessage:(id)arg0 decoderData:(id)arg1 ;
-(id)initWithIncidentMessageIndex:(NSUInteger)arg0 decoderData:(id)arg1 ;
-(void)_populateTransitIncidentsWithDecoderData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif