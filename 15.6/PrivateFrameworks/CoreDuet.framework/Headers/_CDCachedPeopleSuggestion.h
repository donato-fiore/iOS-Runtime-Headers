// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDCACHEDPEOPLESUGGESTION_H
#define _CDCACHEDPEOPLESUGGESTION_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "_CDPeopleSuggesterContext.h"
#import "_CDPeopleSuggesterSettings.h"

@interface _CDCachedPeopleSuggestion : NSObject

@property (retain) _CDPeopleSuggesterContext *context; // ivar: _context
@property (retain) NSDate *date; // ivar: _date
@property (retain) _CDPeopleSuggesterSettings *settings; // ivar: _settings
@property (retain) NSArray *suggestions; // ivar: _suggestions


-(BOOL)isValidForContext:(id)arg0 ;
-(BOOL)isValidForContext:(id)arg0 settings:(id)arg1 timeoutSeconds:(CGFloat)arg2 ;
-(BOOL)isValidForSettings:(id)arg0 ;


@end


#endif