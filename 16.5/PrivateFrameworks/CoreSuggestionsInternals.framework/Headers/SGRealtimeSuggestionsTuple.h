// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGREALTIMESUGGESTIONSTUPLE_H
#define SGREALTIMESUGGESTIONSTUPLE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGRealtimeSuggestionsTuple : NSObject

@property (retain) NSArray *contacts; // ivar: _contacts
@property (retain) NSArray *deliveries; // ivar: _deliveries
@property (retain) NSArray *events; // ivar: _events
@property (retain) NSArray *invalidatedIdentifiers; // ivar: _invalidatedIdentifiers
@property (retain) NSArray *reminders; // ivar: _reminders


-(NSUInteger)suggestionsCount;
-(id)combinedSuggestions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif