// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOPLACESEARCHCOMPLETION_H
#define _GEOPLACESEARCHCOMPLETION_H

@class NSString, NSArray;
@protocol GEOCompletion;

#import <Foundation/Foundation.h>

#import "GEOAutocompleteSessionData.h"

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOAutocompleteSessionData *sessionData; // ivar: _sessionData
@property (readonly) Class superclass;


-(id)initWithResponse:(id)arg0 traits:(id)arg1 sessionData:(id)arg2 mapItems:(id)arg3 ;


@end


#endif