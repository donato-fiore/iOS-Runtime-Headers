// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETECALENDARQUERYASSEMBLER_H
#define CNAUTOCOMPLETECALENDARQUERYASSEMBLER_H

@class CNObservable;

#import <Foundation/Foundation.h>


@interface CNAutocompleteCalendarQueryAssembler : NSObject

@property (readonly) CNObservable *cachedObservable; // ivar: _cachedObservable
@property (readonly) CNObservable *rawCachedObservable; // ivar: _rawCachedObservable
@property (readonly) CNObservable *rawUncachedObservable; // ivar: _rawUncachedObservable
@property (readonly) CNObservable *uncachedObservable; // ivar: _uncachedObservable


-(id)description;
-(id)initWithRawCachedObservable:(id)arg0 rawUncachedObservable:(id)arg1 ;
-(void)assemble;


@end


#endif