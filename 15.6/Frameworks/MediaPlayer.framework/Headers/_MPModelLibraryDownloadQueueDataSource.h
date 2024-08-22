// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMODELLIBRARYDOWNLOADQUEUEDATASOURCE_H
#define _MPMODELLIBRARYDOWNLOADQUEUEDATASOURCE_H

@class NSString;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPModelLibraryDownloadQueueRequest.h"
#import "MPMediaLibraryEntityTranslator.h"
#import "MPMediaLibraryEntityTranslationContext.h"

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPLazySectionedCollectionDataSource>

 {
    MPModelLibraryDownloadQueueRequest *_request;
    MPMediaLibraryEntityTranslator *_entityTranslator;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    ? _entityQueryResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif