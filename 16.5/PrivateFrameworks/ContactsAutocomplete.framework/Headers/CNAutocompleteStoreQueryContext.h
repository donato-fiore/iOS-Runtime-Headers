// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETESTOREQUERYCONTEXT_H
#define CNAUTOCOMPLETESTOREQUERYCONTEXT_H

@class CNCache;

#import <Foundation/Foundation.h>


@interface CNAutocompleteStoreQueryContext : NSObject

@property (readonly) CNCache *calendarServerReuseCache; // ivar: _calendarServerReuseCache
@property (readonly) CNCache *directoryServerReuseCache; // ivar: _directoryServerReuseCache


+(id)cacheBoundaryStrategies;
-(id)init;


@end


#endif