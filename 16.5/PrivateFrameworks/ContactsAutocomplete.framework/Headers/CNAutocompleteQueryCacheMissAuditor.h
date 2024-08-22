// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEQUERYCACHEMISSAUDITOR_H
#define CNAUTOCOMPLETEQUERYCACHEMISSAUDITOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNAutocompleteQueryCacheMissLogger.h"

@interface CNAutocompleteQueryCacheMissAuditor : NSObject

@property (copy) NSArray *cachedResults; // ivar: _cachedResults
@property (retain) CNAutocompleteQueryCacheMissLogger *logger; // ivar: _logger


-(id)description;
-(id)init;
-(id)initWithLogger:(id)arg0 ;
-(void)didReturnCachedResults:(id)arg0 ;
-(void)didReturnLiveResults:(id)arg0 ;


@end


#endif