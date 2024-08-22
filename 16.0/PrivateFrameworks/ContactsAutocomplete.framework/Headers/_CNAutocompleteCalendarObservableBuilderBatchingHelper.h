// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNAUTOCOMPLETECALENDAROBSERVABLEBUILDERBATCHINGHELPER_H
#define _CNAUTOCOMPLETECALENDAROBSERVABLEBUILDERBATCHINGHELPER_H

@class NSString;
@protocol CNAutocompleteObservableBuilderBatchingHelper;

#import <Foundation/Foundation.h>

#import "_CNAutocompleteObservableBuilderBatchingHelper.h"

@interface _CNAutocompleteCalendarObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper; // ivar: _helper
@property (readonly) Class superclass;


-(BOOL)batchAtIndexIncludesServer:(NSUInteger)arg0 ;
-(id)batchedObservables;
-(id)init;
-(void)addCachedCalendarServerObservable:(id)arg0 ;
-(void)addCachedDirectoryServerObservable:(id)arg0 ;
-(void)addCalendarServerObservable:(id)arg0 ;
-(void)addContactsObservable:(id)arg0 ;
-(void)addCoreRecentsObservable:(id)arg0 ;
-(void)addDirectoryServerObservable:(id)arg0 ;
-(void)addLocalExtensionObservable:(id)arg0 ;
-(void)addPredictionObservable:(id)arg0 ;
-(void)addSuggestionsObservable:(id)arg0 ;
-(void)addSupplementalObservable:(id)arg0 ;


@end


#endif