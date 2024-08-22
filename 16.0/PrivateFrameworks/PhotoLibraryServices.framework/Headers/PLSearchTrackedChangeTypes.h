// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHTRACKEDCHANGETYPES_H
#define PLSEARCHTRACKEDCHANGETYPES_H


#import <Foundation/Foundation.h>

#import "PLSearchTrackedAttributes.h"

@interface PLSearchTrackedChangeTypes : NSObject

@property (retain, nonatomic) PLSearchTrackedAttributes *searchTrackedAttributes; // ivar: _searchTrackedAttributes


+(BOOL)isEntityIndexedBySearch:(id)arg0 ;
+(id)entityNamesIndexedBySearch;
-(BOOL)shouldUpdateSearchIndexForChange:(id)arg0 entityName:(id)arg1 photoLibrary:(id)arg2 ;
-(id)_changesTrackedBySearchForEntity:(id)arg0 ;
-(id)trackedEntityNameForChange:(id)arg0 photoLibrary:(id)arg1 ;
-(id)uuidForPersistentHistoryDeletionChange:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif