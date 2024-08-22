// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSCOMPONENT_H
#define ICSCOMPONENT_H

@class NSMutableDictionary, NSString, NSArray, NSMutableArray, NSURL;
@protocol ICSWriting;

#import <Foundation/Foundation.h>

#import "ICSDate.h"
#import "ICSDuration.h"
#import "ICSUserAddress.h"
#import "ICSTrigger.h"
#import "ICSStructuredLocation.h"

@interface ICSComponent : NSObject <ICSWriting>

 {
    NSMutableDictionary *_properties;
    NSString *_unrecognizedComponentName;
}


@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain, nonatomic) NSMutableArray *components; // ivar: _components
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (readonly) BOOL isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property NSUInteger priority;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *relatedTo;
@property (retain) NSArray *rrule;
@property NSUInteger sequence;
@property int status;
@property (retain) NSString *statusString;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (retain) NSString *unrecognizedComponentName;
@property (retain) NSURL *url;
@property (retain) NSString *x_apple_contactIdentifiers;
@property (retain) NSString *x_apple_dropbox;
@property (retain) NSString *x_apple_etag;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore;
@property (retain) NSString *x_apple_relatedExternalID;
@property (retain) NSString *x_apple_scheduletag;
@property (retain) NSString *x_apple_serverFilename;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property NSUInteger x_apple_suggestionInfoChangedFields;
@property BOOL x_apple_suggestionInfoChangesAcknowledged;
@property (retain) NSString *x_apple_suggestionInfoOpaqueKey;
@property (retain) ICSDate *x_apple_suggestionInfoTimestamp;
@property (retain) NSString *x_apple_suggestionInfoUniqueKey;
@property (retain) NSString *x_apple_universalID;
@property int x_calendarserver_access;


+(NSUInteger)relationshipTypeFromString:(id)arg0 ;
+(id)inheritanceKeywords;
+(id)makeUID;
+(id)name;
+(id)stringFromRelationshipType:(NSUInteger)arg0 ;
+(id)stringFromStatus:(int)arg0 ;
+(int)statusFromString:(id)arg0 ;
-(BOOL)forcedAllDay;
-(BOOL)ignorePropertyWithName:(id)arg0 ;
-(BOOL)shouldObscureValue;
-(BOOL)validate:(*id)arg0 ;
-(id)ICSStringWithOptions:(NSUInteger)arg0 ;
-(id)allProperties;
-(id)debugDescription;
-(id)init;
-(id)parametersToIncludeForChecksumVersion:(int)arg0 ;
-(id)parametersToObscure;
-(id)properties;
-(id)propertiesForName:(id)arg0 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0 ;
-(id)propertiesToHide;
-(id)propertiesToIncludeForChecksumVersion:(int)arg0 ;
-(id)propertiesToObscure;
-(id)x_apple_travel_advisory_behavior;
-(id)x_apple_travel_start;
-(void)ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)addComponent:(id)arg0 withUIDGenerator:(id)arg1 ;
-(void)addProperty:(id)arg0 withValue:(id)arg1 ;
-(void)fixAlarms;
-(void)fixAttachments;
-(void)fixAttendees;
-(void)fixComponent;
-(void)fixExceptionDates;
-(void)fixExceptionRules;
-(void)fixPropertiesInheritance:(id)arg0 ;
-(void)fixRecurrenceDates;
-(void)fixRecurrenceRules;
-(void)fixRelatedTo;
-(void)fixSuggestionInfo;
-(void)removeComponent:(id)arg0 ;
-(void)removePropertiesForName:(id)arg0 ;
-(void)setForcedAllDay:(BOOL)arg0 ;
-(void)setProperties:(id)arg0 forName:(id)arg1 ;
-(void)setProperty:(id)arg0 forName:(id)arg1 ;
-(void)setPropertyValue:(id)arg0 forName:(id)arg1 ;
-(void)setPropertyValue:(id)arg0 type:(int)arg1 forName:(id)arg2 ;
-(void)setX_apple_end_location:(id)arg0 ;
-(void)setX_apple_travel_advisory_behavior:(id)arg0 ;
-(void)setX_apple_travel_duration:(id)arg0 ;
-(void)setX_apple_travel_start:(id)arg0 ;


@end


#endif