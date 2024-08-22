// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDHISTORIAN_H
#define TDHISTORIAN_H


#import <Foundation/Foundation.h>

#import "CoreThemeDocument.h"

@interface TDHistorian : NSObject {
    CoreThemeDocument *document;
}




-(BOOL)foundDataChangesSinceDate:(id)arg0 ;
-(id)_updateRecordsWithName:(id)arg0 sinceDate:(id)arg1 ;
-(id)colorsChangedSinceDate:(id)arg0 ;
-(id)facetDefinitionsChangedSinceDate:(id)arg0 ;
-(id)fontSizesChangedSinceDate:(id)arg0 ;
-(id)fontsChangedSinceDate:(id)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)keySpecsForRenditionsRemovedSinceDate:(id)arg0 ;
-(id)namedElementsChangedSinceDate:(id)arg0 ;
-(id)productionsChangedSinceDate:(id)arg0 uuidNeedsReset:(*BOOL)arg1 ;
-(id)productionsWithModifiedAssets;
-(void)_updateEntryForManagedObject:(id)arg0 ;
-(void)updateEntriesForManagedObjects:(id)arg0 ;


@end


#endif