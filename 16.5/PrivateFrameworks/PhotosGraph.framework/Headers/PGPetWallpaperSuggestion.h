// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPETWALLPAPERSUGGESTION_H
#define PGPETWALLPAPERSUGGESTION_H

@class NSArray;


#import "PGSingleAssetSuggestion.h"

@interface PGPetWallpaperSuggestion : PGSingleAssetSuggestion {
    NSArray *_suggestedPersonLocalIdentifiers;
}




-(id)initWithPetLocalIdentifier:(id)arg0 subtype:(unsigned short)arg1 asset:(id)arg2 ;
-(id)suggestedPersonLocalIdentifiers;


@end


#endif