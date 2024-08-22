// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMCOREROUTINEEVENT_H
#define GEOMAPITEMCOREROUTINEEVENT_H

@class NSDictionary, NSString, NSDate;


#import "GEOBaseMapItem.h"
#import "GEOMapItemClientAttributes.h"
#import "GEOPlace.h"
#import "GEOAddressObject.h"

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    ? _coordinate;
    GEOAddressObject *_addressObject;
}




-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)isEventAllDay;
-(BOOL)isValid;
-(id)_clientAttributes;
-(id)_place;
-(id)addressDictionary;
-(id)addressObject;
-(id)description;
-(id)eventDate;
-(id)eventName;
-(id)geoAddress;
-(id)initWithAddressDictionary:(id)arg0 eventName:(id)arg1 eventTitle:(id)arg2 eventDate:(id)arg3 eventIsAllDay:(BOOL)arg4 coordinate:(struct ? )arg5 clientAttributes:(id)arg6 ;
-(id)name;
-(id)weatherDisplayName;
-(struct ? )coordinate;


@end


#endif