// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDONTOLOGYCONCEPTMANAGER_H
#define HDONTOLOGYCONCEPTMANAGER_H

@class NSString;
@protocol HDProfileReadyObserver, HDOntologyImportStatusObserver;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDOntologyConceptManager : NSObject <HDProfileReadyObserver, HDOntologyImportStatusObserver>

 {
    HDProfile *_profile;
    HDDatabaseValueCache *_conceptsByIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)enumerateConceptsMatchingPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)enumerateConceptsMatchingPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(id)conceptForCodingCollection:(id)arg0 configuration:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)relationshipsForConceptWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)conceptForIdentifier:(id)arg0 loadRelationships:(BOOL)arg1 error:(*id)arg2 ;
-(id)conceptsForIdentifiers:(id)arg0 loadRelationships:(BOOL)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(void)clearCachedConceptWithIdentifier:(id)arg0 transaction:(id)arg1 ;
-(void)ontologyDatabaseReferenceOntologyFinishedImport:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)ontologyDatabaseReferenceOntologyWillImport:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)unitTesting_clearCache;


@end


#endif