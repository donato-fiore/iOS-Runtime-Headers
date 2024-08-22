// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYSYSTEMFILTERS_H
#define MPMEDIALIBRARYSYSTEMFILTERS_H


#import <Foundation/Foundation.h>

#import "MPMediaLibraryView.h"

@interface MPMediaLibrarySystemFilters : NSObject {
    MPMediaLibraryView *_libraryView;
    BOOL _shouldExcludePurchaseHistoryContent;
}




+(id)filtersForLibrary:(id)arg0 ;
+(id)globalSerialQueue;
+(id)systemFiltersPerLibrary;
-(BOOL)shouldExcludePurchaseHistoryContent;
-(id)_initWithLibrary:(id)arg0 ;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg0 ;
-(void)_updateFilters;


@end


#endif