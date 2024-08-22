// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDPEOPLESUGGESTERCONTEXT_H
#define _CDPEOPLESUGGESTERCONTEXT_H

@class NSString, NSSet, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_CDInteraction.h"

@interface _CDPeopleSuggesterContext : NSObject <NSCopying>



@property (retain) _CDInteraction *activeInteraction; // ivar: _activeInteraction
@property (retain) NSString *consumerIdentifier; // ivar: _consumerIdentifier
@property (retain) NSString *contactPrefix; // ivar: _contactPrefix
@property (retain) NSSet *contentUTIs; // ivar: _contentUTIs
@property (retain) NSDate *date; // ivar: _date
@property (retain) NSString *locationUUID; // ivar: _locationUUID
@property (retain) NSSet *nearbyPeople; // ivar: _nearbyPeople
@property (retain) NSSet *seedContactIdentifiers; // ivar: _seedContactIdentifiers
@property (retain) NSString *title; // ivar: _title


+(id)currentContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif