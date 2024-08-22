// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAMILYSHARINGLIBRARYSHELVESDATASOURCE_H
#define VUIFAMILYSHARINGLIBRARYSHELVESDATASOURCE_H

@class NSString, NSMutableSet;
@protocol VUILibraryDataSourceDelegate;


#import "VUILibraryShelvesDataSource.h"
#import "VUIFamilyMember.h"

@interface VUIFamilySharingLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (retain, nonatomic) NSMutableSet *fetchedDataSources; // ivar: _fetchedDataSources
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dataSourceForShelves;
-(id)initWithValidShelfTypes:(id)arg0 withFamilyMember:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)startFetch;


@end


#endif