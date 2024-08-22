// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPLIBRARYOBJECTDATABASE_H
#define MPLIBRARYOBJECTDATABASE_H

@class MSVSQLDatabase, NSString;
@protocol MPObjectDatabase;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryView.h"
#import "MPMediaLibrary.h"

@interface MPLibraryObjectDatabase : NSObject <MPObjectDatabase>

 {
    MSVSQLDatabase *_msvDatabase;
    MPMediaLibraryView *_libraryView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPMediaLibrary *library; // ivar: _library
@property (readonly) Class superclass;


-(id)identifiersForTokens:(id)arg0 ;
-(id)identifiersMatchingIdentifierSet:(id)arg0 propertySet:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithLibrary:(id)arg0 ;
-(id)modelObjectMatchingIdentifierSet:(id)arg0 propertySet:(id)arg1 error:(*id)arg2 ;
-(id)tokenForIdentifiers:(id)arg0 propertySet:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_enumerateRequestsForSupportedTypesWithPropertySet:(id)arg0 identifiers:(id)arg1 block:(id)arg2 ;


@end


#endif