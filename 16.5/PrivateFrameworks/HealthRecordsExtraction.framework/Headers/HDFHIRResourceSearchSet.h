// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFHIRRESOURCESEARCHSET_H
#define HDFHIRRESOURCESEARCHSET_H

@class NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface HDFHIRResourceSearchSet : NSObject

@property (readonly, copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly, copy, nonatomic) NSURL *nextPageURL; // ivar: _nextPageURL
@property (readonly, copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (readonly, copy, nonatomic) NSURL *serverBaseURL; // ivar: _serverBaseURL


+(id)searchSetWithFHIRJSONObject:(id)arg0 serverBaseURL:(id)arg1 error:(*id)arg2 ;
-(id)_initWithEntries:(id)arg0 serverBaseURL:(id)arg1 pageURL:(id)arg2 nextPageURL:(id)arg3 ;


@end


#endif